#pragma once 
#include "ros/node_handle.h"
#include "ros/publisher.h"
#include <ros/ros.h>
#include <string>
#include <robotinfo_msgs/RobotInfo10Fields.h>
using namespace std;
class RobotInfo{
public:
ros::Publisher pub_info;
RobotInfo(){};
RobotInfo(ros::NodeHandle *node_handle);

virtual void publish_data();

protected:
robotinfo_msgs::RobotInfo10Fields msgs;
ros::NodeHandle *nh;
std::string robot_description = "robot_description: Mir100";
std::string serial_number = "serial_number: 567A359";
std::string ip_address = "ip_address: 169.254.5.180";
std::string firmware_version = "firmware_version: 3.5.8";

};