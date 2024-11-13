#include <ros/ros.h>
#include <iostream>
#include "robot_info/agv_robot_info_class.h"
#include "robot_info/robot_info_class.h"
#include "ros/init.h"
#include "ros/node_handle.h"
#include "ros/rate.h"
using namespace std;


int main(int argc, char **argv){
ros::init(argc, argv,"robot_info");
ros::NodeHandle nh;
ros::Rate rate(1);
RobotInfo ri = RobotInfo(&nh);
while(ros::ok() == true){
ri.publish_data();
// ROS_INFO("published");
rate.sleep();
// ROS_INFO("sleept");
}
ros::spin();
}