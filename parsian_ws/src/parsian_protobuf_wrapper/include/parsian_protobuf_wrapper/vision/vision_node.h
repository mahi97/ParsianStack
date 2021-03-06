//
// Created by kian behzad on 3/22/20.
//

#ifndef PARSIAN_PROTOBUF_WRAPPER_VISION_NODE_H
#define PARSIAN_PROTOBUF_WRAPPER_VISION_NODE_H

#include <functional>
#include <chrono>
#include <string>

#include "parsian_msgs/msg/ssl_vision_detection.hpp"
#include "parsian_msgs/msg/ssl_vision_geometry.hpp"
#include "parsian_protobuf_wrapper/vision/convert/convert_detection.h"
#include "parsian_protobuf_wrapper/vision/convert/convert_geometry.h"
#include "parsian_protobuf_wrapper/common/net/robocup_ssl_client.h"
#include "parsian_protobuf_wrapper/proto/messages_robocup_ssl_wrapper.pb.h"

#include "rclcpp/rclcpp.hpp"


using namespace std::chrono_literals;


class VisionNode : public rclcpp::Node
{
public:
    VisionNode(const rclcpp::NodeOptions & options);

private:
    std::function<void(const rcl_interfaces::msg::ParameterEvent::SharedPtr)> params_change_callback;
    rclcpp::Subscription<rcl_interfaces::msg::ParameterEvent>::SharedPtr parameter_event_sub;
    void define_params_change_callback_lambda_function();

    rclcpp::Publisher<parsian_msgs::msg::SSLVisionGeometry>::SharedPtr ssl_geometry_pub;
    rclcpp::Publisher<parsian_msgs::msg::SSLVisionDetection>::SharedPtr ssl_detection_pub;

    void timer_callback();
    rclcpp::TimerBase::SharedPtr timer;


    void reconnect();


    RoboCupSSLClient* vision;
    SSL_WrapperPacket vision_packet;
    int vision_multicast_port;
    std::string vision_multicast_ip;

    bool is_our_color_yellow = false;
    bool is_our_side_left = false;


};





#endif //PARSIAN_PROTOBUF_WRAPPER_VISION_NODE_H
