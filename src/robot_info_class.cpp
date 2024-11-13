#include "ros/node_handle.h"
#include "ros/publisher.h"
#include <ros/ros.h>
#include <string>
#include "robot_info/robot_info_class.h"
#include <robotinfo_msgs/RobotInfo10Fields.h>
using namespace std;
RobotInfo::RobotInfo(ros::NodeHandle *node_handle){
nh = node_handle;
// publish_data();
}
void RobotInfo::publish_data(){
// ROS_INFO("start");
pub_info = nh->advertise<robotinfo_msgs::RobotInfo10Fields>("robot_info",5);
msgs.data_field_01 = robot_description;
msgs.data_field_02 = serial_number;
msgs.data_field_03 = ip_address;
msgs.data_field_04 = firmware_version;
pub_info.publish(msgs);
// ROS_INFO("finished");

// ROS_INFO("Robot description = %s",robot_description.c_str());
// ROS_INFO("Serial number = %s",serial_number.c_str());
// ROS_INFO("IP adress = %s",ip_address.c_str());
// ROS_INFO("Firmware version = %s",firmware_version.c_str());

}



