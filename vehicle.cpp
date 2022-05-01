#include "vehicle.h"

using namespace std;


Vehicle::Vehicle(string vehicleNumber, string vehicleColor) {
    this->vehicleNumber = vehicleNumber;
    this->vehicleColor = vehicleColor;
}

string Vehicle::getVehicleNumber() {
    return vehicleNumber;
}

string Vehicle::getVehiclecolor() {
    return vehicleColor;
}
