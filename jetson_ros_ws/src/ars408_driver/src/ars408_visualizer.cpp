#include "ars408_ros/ars408_visualizer.hpp"

namespace ars408
{

    visualization_msgs::msg::Marker Ars408Visualizer::createTrackMarker(
        const RadarObject &object,
        int marker_id,
        const std::string &frame_id,
        const rclcpp::Time &stamp,
        double size_x,
        double size_y)
    {
        visualization_msgs::msg::Marker marker;
        marker.header.frame_id = frame_id;
        marker.header.stamp = stamp;
        marker.ns = "radar_tracks";
        marker.id = marker_id;
        marker.type = visualization_msgs::msg::Marker::CUBE;
        marker.action = visualization_msgs::msg::Marker::ADD;

        // Set position (using the object's radar distances)
        marker.pose.position.x = object.distance_long_x;
        marker.pose.position.y = object.distance_lat_y;
        marker.pose.position.z = 0.0;
        // Set orientation to identity (no rotation)
        marker.pose.orientation.x = 0.0;
        marker.pose.orientation.y = 0.0;
        marker.pose.orientation.z = 0.0;
        marker.pose.orientation.w = 1.0;

        // Set the size of the marker (cube)
        marker.scale.x = size_x;
        marker.scale.y = size_y;
        marker.scale.z = 1.0; // Fixed height

        // Set color to blue (for tracks)
        marker.color.r = 0.0;
        marker.color.g = 0.0;
        marker.color.b = 1.0;
        marker.color.a = 1.0;

        // Marker persists until updated or removed
        marker.lifetime = rclcpp::Duration(0, 0);

        return marker;
    }

    visualization_msgs::msg::Marker Ars408Visualizer::createScanMarker(
        const RadarObject &object,
        int marker_id,
        const std::string &frame_id,
        const rclcpp::Time &stamp,
        double scale)
    {
        visualization_msgs::msg::Marker marker;
        marker.header.frame_id = frame_id;
        marker.header.stamp = stamp;
        marker.ns = "radar_scan";
        marker.id = marker_id;
        marker.type = visualization_msgs::msg::Marker::SPHERE;
        marker.action = visualization_msgs::msg::Marker::ADD;

        // Set position (using the object's radar distances)
        marker.pose.position.x = object.distance_long_x;
        marker.pose.position.y = object.distance_lat_y;
        marker.pose.position.z = 0.0;
        // Set orientation to identity
        marker.pose.orientation.x = 0.0;
        marker.pose.orientation.y = 0.0;
        marker.pose.orientation.z = 0.0;
        marker.pose.orientation.w = 1.0;

        // Use equal scaling for a sphere
        marker.scale.x = scale;
        marker.scale.y = scale;
        marker.scale.z = scale;

        // Set color to red (for scan)
        marker.color.r = 1.0;
        marker.color.g = 0.0;
        marker.color.b = 0.0;
        marker.color.a = 1.0;

        marker.lifetime = rclcpp::Duration(0, 0);

        return marker;
    }

} // namespace ars408
