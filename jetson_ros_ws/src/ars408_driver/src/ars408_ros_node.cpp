// Copyright 2021 Perception Engine, Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "ars408_ros/ars408_ros_node.hpp"

#include <rclcpp/rclcpp.hpp>

#include <string>
#include <unordered_map>

PeContinentalArs408Node::PeContinentalArs408Node(const rclcpp::NodeOptions & node_options)
: Node("ars408_node", node_options)
{
  GenerateUUIDTable();
  Run();
}

void PeContinentalArs408Node::CanFrameCallback(const can_msgs::msg::Frame::SharedPtr can_msg)
{
  if (!can_msg->data.empty()) {
    can_data_ = can_msg;
    ars408_driver_.Parse(can_msg->id, can_msg->data, can_msg->dlc);
  }
}

uint32_t PeContinentalArs408Node::ConvertRadarClassToAwSemanticClass(
  const ars408::Obj_3_Extended::ObjectClassProperty & in_radar_class)
{
  switch (in_radar_class) {
    case ars408::Obj_3_Extended::BICYCLE:
      return 32006;
      break;
    case ars408::Obj_3_Extended::CAR:
      return 32001;
      break;
    case ars408::Obj_3_Extended::TRUCK:
      return 32002;
      break;
    case ars408::Obj_3_Extended::MOTORCYCLE:
      return 32005;
      break;
    case ars408::Obj_3_Extended::POINT:
    case ars408::Obj_3_Extended::RESERVED_01:
    case ars408::Obj_3_Extended::WIDE:
    case ars408::Obj_3_Extended::RESERVED_02:
    default:
      return 32000;
      break;
  }
}

radar_msgs::msg::RadarTrack PeContinentalArs408Node::ConvertRadarObjectToRadarTrack(
  const ars408::RadarObject & in_object)
{
  radar_msgs::msg::RadarTrack out_object;
  out_object.uuid = UUID_table_[in_object.id];

  out_object.position.x = in_object.distance_long_x;
  out_object.position.y = in_object.distance_lat_y;

  out_object.velocity.x = in_object.speed_long_x;
  out_object.velocity.y = in_object.speed_lat_y;
  out_object.velocity_covariance.at(0) = 0.1;

  out_object.acceleration.x = in_object.rel_acceleration_long_x;
  out_object.acceleration.y = in_object.rel_acceleration_lat_y;

  out_object.size.x = size_x_;
  out_object.size.y = size_y_;
  out_object.size.z = 1.0;

  out_object.classification = ConvertRadarClassToAwSemanticClass(in_object.object_class);

  return out_object;
}

radar_msgs::msg::RadarReturn PeContinentalArs408Node::ConvertRadarObjectToRadarReturn(
  const ars408::RadarObject & in_object)
{
  radar_msgs::msg::RadarReturn radar_return;
  radar_return.range = std::sqrt(
    in_object.distance_long_x * in_object.distance_long_x +
    in_object.distance_lat_y * in_object.distance_lat_y);
  radar_return.azimuth = std::atan2(in_object.distance_lat_y, in_object.distance_long_x);
  radar_return.doppler_velocity = in_object.speed_long_x / std::cos(radar_return.azimuth);
  radar_return.elevation = 0.0;
  radar_return.amplitude = 0.0;
  return radar_return;
}

void PeContinentalArs408Node::RadarDetectedObjectsCallback(
  const std::unordered_map<uint8_t, ars408::RadarObject> & detected_objects)
{
  radar_msgs::msg::RadarTracks output_objects;
  output_objects.header.frame_id = output_frame_;
  output_objects.header.stamp = can_data_->header.stamp;

  radar_msgs::msg::RadarScan output_scan;
  output_scan.header.frame_id = output_frame_;
  output_scan.header.stamp = can_data_->header.stamp;

  visualization_msgs::msg::MarkerArray marker_array;
  int marker_id = 0;

  for (const auto & object : detected_objects) {
    if (publish_radar_track_) {
      output_objects.tracks.emplace_back(ConvertRadarObjectToRadarTrack(object.second));
      // If tracks are enabled, convert to radar track message and marker (cube)
      if (visualize_radar_markers_)
      {
        auto marker = ars408::Ars408Visualizer::createTrackMarker(
            object.second, marker_id++, output_frame_, can_data_->header.stamp, size_x_, size_y_);
        marker_array.markers.push_back(marker);
      }
    };
    if (publish_radar_scan_) {
      output_scan.returns.emplace_back(ConvertRadarObjectToRadarReturn(object.second));
      // If scan is enabled, convert to radar scan message and marker (sphere)
      if (visualize_radar_markers_)
      {
        auto marker = ars408::Ars408Visualizer::createScanMarker(
            object.second, marker_id++, output_frame_, can_data_->header.stamp, 0.2);
        marker_array.markers.push_back(marker);
      }
    }
  }

  if (publish_radar_track_) {
    publisher_radar_tracks_->publish(output_objects);
  }
  if (publish_radar_scan_) {
    publisher_radar_scan_->publish(output_scan);
  }

  // Publish the MarkerArray so that rviz can visualize the markers.
  if (visualize_radar_markers_)
  {
    publisher_marker_array_->publish(marker_array);
  }
}

unique_identifier_msgs::msg::UUID PeContinentalArs408Node::GenerateRandomUUID()
{
  unique_identifier_msgs::msg::UUID uuid;
  std::mt19937 gen(std::random_device{}());
  std::independent_bits_engine<std::mt19937, 8, uint8_t> bit_eng(gen);
  std::generate(uuid.uuid.begin(), uuid.uuid.end(), bit_eng);
  return uuid;
}

void PeContinentalArs408Node::GenerateUUIDTable()
{
  for (size_t i = 0; i <= max_radar_id; i++) {
    UUID_table_.emplace_back(PeContinentalArs408Node::GenerateRandomUUID());
  }
}

void PeContinentalArs408Node::PublishRadarState()
{
  // Ensure we have valid radar state data
  bool validRadarState = ars408_driver_.GetCurrentRadarState(current_radar_state_);
  if (!validRadarState) {
    RCLCPP_WARN(this->get_logger(), "No radar state available yet.");
    return;
  }

  // Create a RadarStatus message
  auto msg = std::make_unique<radar_msgs::msg::RadarStatus>();

  // Map RadarState fields to RadarStatus.msg fields
  msg->read_status = current_radar_state_.NvmReadStatus;
  msg->write_status = current_radar_state_.NvmWriteStatus;
  msg->max_distance = current_radar_state_.MaxDistance;
  msg->persistent_error = current_radar_state_.PersistentError;
  msg->interference = current_radar_state_.Interference;
  msg->temperature_error = current_radar_state_.TemperatureError;
  msg->temporary_error = current_radar_state_.TemporaryError;
  msg->voltage_error = current_radar_state_.VoltageError;
  msg->sensor_id = current_radar_state_.SensorID;
  msg->sort_index = static_cast<int8_t>(current_radar_state_.SortingMode);
  msg->radar_power_cfg = static_cast<int8_t>(current_radar_state_.PowerMode);
  msg->ctrl_relay_cfg = (current_radar_state_.CtrlRelay == ars408::RadarState::Config::ACTIVE);
  msg->output_type_cfg = static_cast<int8_t>(current_radar_state_.OutputType);
  msg->send_quality_cfg = (current_radar_state_.SendQuality == ars408::RadarState::Config::ACTIVE);
  msg->send_ext_info_cfg = (current_radar_state_.SendExtInfo == ars408::RadarState::Config::ACTIVE);
  msg->motion_rx_state = static_cast<int8_t>(current_radar_state_.EgoMotionRxStatus);
  msg->rcs_threshold = (current_radar_state_.Rcs_Threshold == ars408::RadarState::Rcs_ThresholdConfig::HIGH_SENSITIVITY);

  // Publish the message
  publisher_radar_state_->publish(std::move(msg));

  //RCLCPP_INFO(this->get_logger(), "Published Radar State.");
}

void PeContinentalArs408Node::Run()
{
  output_frame_ = this->declare_parameter<std::string>("output_frame", "ars408");
  publish_radar_track_ = this->declare_parameter<bool>("publish_radar_track", true);
  publish_radar_scan_ = this->declare_parameter<bool>("publish_radar_scan", false);
  sequential_publish_ = this->declare_parameter<bool>("sequential_publish", false);
  size_x_ = this->declare_parameter<double>("size_x", 1.8);
  size_y_ = this->declare_parameter<double>("size_y", 1.8);
  visualize_radar_markers_ = this->declare_parameter<bool>("visualize_radar_markers", false);

  ars408_driver_.RegisterDetectedObjectsCallback(
    std::bind(&PeContinentalArs408Node::RadarDetectedObjectsCallback, this, std::placeholders::_1),
    sequential_publish_);

  subscription_ = this->create_subscription<can_msgs::msg::Frame>(
    "~/input/frame", 10,
    std::bind(&PeContinentalArs408Node::CanFrameCallback, this, std::placeholders::_1));

  publisher_radar_tracks_ =
    this->create_publisher<radar_msgs::msg::RadarTracks>("~/output/objects", 10);
  publisher_radar_scan_ = this->create_publisher<radar_msgs::msg::RadarScan>("~/output/scan", 10);

  // Publisher for radar state
  publisher_radar_state_ =
      this->create_publisher<radar_msgs::msg::RadarStatus>("~/output/radar_state", 10);

  // Timer to publish radar state periodically @ 1 sec
  radar_state_timer_ = this->create_wall_timer(
      std::chrono::seconds(1),
      std::bind(&PeContinentalArs408Node::PublishRadarState, this));

  // Publisher for radra visualization messages for rviz
  if (visualize_radar_markers_)
  {
    publisher_marker_array_ = this->create_publisher<visualization_msgs::msg::MarkerArray>("~/output/radar_markers", 10);
  }
}

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(PeContinentalArs408Node)
