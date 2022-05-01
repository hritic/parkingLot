#define  VEHICLE_H
#include <iostream>

using namespace std;

class Vehicle {
private:
    string vehicleNumber;
    string vehicleColor;

public:
    Vehicle(string vehicleNumber, string vehicleColor);
    string getVehicleNumber();
    string getVehiclecolor();
};