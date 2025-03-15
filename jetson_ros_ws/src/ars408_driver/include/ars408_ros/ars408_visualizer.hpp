#ifndef ARS408_VISUALIZER_HPP_
#define ARS408_VISUALIZER_HPP_

#include <string>
#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "visualization_msgs/msg/marker_array.hpp"
#include "ars408_ros/ars408_driver.hpp"

namespace ars408
{

    class Ars408Visualizer
    {
    public:
        /**
         * @brief Converts a radar object into a cube marker (for radar tracks).
         *
         * @param object The radar object.
         * @param marker_id A unique identifier for this marker.
         * @param frame_id The frame ID to use for the marker.
         * @param stamp The timestamp for the marker.
         * @param size_x The width of the cube (default 1.8).
         * @param size_y The length of the cube (default 1.8).
         * @return visualization_msgs::msg::Marker A cube marker representing the radar track.
         */
        static visualization_msgs::msg::Marker createTrackMarker(
            const ars408::RadarObject &object,
            int marker_id,
            const std::string &frame_id,
            const rclcpp::Time &stamp,
            double size_x = 1.8,
            double size_y = 1.8);

        /**
         * @brief Converts a radar object into a sphere marker (for radar scan).
         *
         * @param object The radar object.
         * @param marker_id A unique identifier for this marker.
         * @param frame_id The frame ID to use for the marker.
         * @param stamp The timestamp for the marker.
         * @param scale The scale of the sphere (default 0.2).
         * @return visualization_msgs::msg::Marker A sphere marker representing the radar scan.
         */
        static visualization_msgs::msg::Marker createScanMarker(
            const ars408::RadarObject &object,
            int marker_id,
            const std::string &frame_id,
            const rclcpp::Time &stamp,
            double scale = 0.2);
    };

} // namespace ars408

#endif // ARS408_VISUALIZER_HPP_
