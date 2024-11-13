#include <iostream>
#include "robot_info/agv_robot_info_class.h"
#include "ros/init.h"
#include "ros/node_handle.h"
#include "ros/rate.h"
using namespace std;


int main(int argc, char **argv){
ros::init(argc, argv,"robot_info");
ros::NodeHandle nh;
ros::Rate rate(1);
AGVRobotInfo agv_ri = AGVRobotInfo(&nh);
while(ros::ok() == true){
agv_ri.publish_data();
rate.sleep();}
ros::spin();
}