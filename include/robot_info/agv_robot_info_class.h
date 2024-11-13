#pragma once
#include "ros/node_handle.h"
#include <ros/ros.h>
#include <robot_info/robot_info_class.h>
#include "robot_info/hydraulic_system_monitor.h"
using namespace std;


class AGVRobotInfo : public RobotInfo{
public:
void publish_data() override;
AGVRobotInfo(ros::NodeHandle *node_handle);
HydraulicSystemMonitor hydraulic_system_monitor;
protected:
std::string maximum_payload;



};