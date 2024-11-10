# pragma once
#include <ros/ros.h>
#include <string>
using namespace std;

class HydraulicSystemMonitor{
public:
std::string hydraulic_oil_temperature = "hydraulic_oil_temperature: 45C";
std::string hydraulic_oil_tank_fill_level = "hydraulic_oil_tank_fill_level: 100%";
std::string hydraulic_oil_pressure = "hydraulic_oil_pressure: 250 bar";

std::string get_hydraulic_oil_temperature(){
return hydraulic_oil_temperature;
}
std::string get_hydraulic_oil_tank_fill_level(){
return hydraulic_oil_tank_fill_level;
}
std::string get_hydraulic_oil_pressure(){
return hydraulic_oil_pressure;
}};