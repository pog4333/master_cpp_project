#include "robot_info/agv_robot_info_class.h"
#include "robot_info/robot_info_class.h"
#include "robot_info/hydraulic_system_monitor.h"
#include "ros/node_handle.h"
#include <ros/ros.h>
#include <iostream>
using namespace std;

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *node_handle){
nh = node_handle;
// hydraulic_oil_temperature = hydraulic_system_monitor.get_hydraulic_oil_temperature();
// hydraulic_oil_tank_fill_level = hydraulic_system_monitor.get_hydraulic_oil_tank_fill_level();
// hydraulic_oil_pressure = hydraulic_system_monitor.get_hydraulic_oil_pressure();
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
RobotInfo::msgs.data_field_06 = hydraulic_system_monitor.get_hydraulic_oil_temperature();
RobotInfo::msgs.data_field_07 = hydraulic_system_monitor.get_hydraulic_oil_tank_fill_level();
RobotInfo::msgs.data_field_08 = hydraulic_system_monitor.get_hydraulic_oil_pressure();
pub_info.publish(RobotInfo::msgs);
}