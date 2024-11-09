#include "robot_info/agv_robot_info_class.h"
#include "robot_info/robot_info_class.h"
#include "ros/node_handle.h"
#include <ros/ros.h>
#include <iostream>
using namespace std;

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *node_handle){
nh = node_handle;
// RobotInfo::publish_data();
while(ros::ok() == true){
publish_data();
}}

void AGVRobotInfo::publish_data(){
pub_info = nh->advertise<robotinfo_msgs::RobotInfo10Fields>("robot_info",5);
RobotInfo::msgs.data_field_01 = robot_description;
RobotInfo::msgs.data_field_02 = serial_number;
RobotInfo::msgs.data_field_03 = ip_address;
RobotInfo::msgs.data_field_04 = firmware_version;
RobotInfo::msgs.data_field_05 = maximum_payload = "maximum_payload: 100 Kg";
pub_info.publish(RobotInfo::msgs);
}