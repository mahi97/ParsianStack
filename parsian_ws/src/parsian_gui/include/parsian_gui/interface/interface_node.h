//
// Created by kian behzad on 4/7/20.
//

#ifndef PARSIAN_GUI_INTERFACE_NODE_H
#define PARSIAN_GUI_INTERFACE_NODE_H


#include <memory>
#include <chrono>
#include <string>
#include <functional>
#include <vector>
#include <thread>

#include <QDebug>
#include <QString>

#include "rclcpp/rclcpp.hpp"

using std::placeholders::_1;
using std::placeholders::_2;
using namespace std::chrono_literals;


class InterfaceNode : public rclcpp::Node
{
public:
    InterfaceNode(const rclcpp::NodeOptions & options);

private:


};



#endif //PARSIAN_GUI_INTERFACE_NODE_H
