#pragma once
#include "ros/node_handle.h"
#include <ros/ros.h>
#include <robot_info/robot_info_class.h>
using namespace std;


class AGVRobotInfo : public RobotInfo{
public:
AGVRobotInfo(ros::NodeHandle *node_handle);
protected:
std::string maximum_payload;
void publish_data();


};