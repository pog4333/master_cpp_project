#include <iostream>
#include "robot_info/agv_robot_info_class.h"
#include "ros/init.h"
#include "ros/node_handle.h"
using namespace std;


int main(int argc, char **argv){
ros::init(argc, argv,"robot_info");
ros::NodeHandle nh;
AGVRobotInfo agv_ri = AGVRobotInfo(&nh);
// ri.publish_data();
ros::spin();
}