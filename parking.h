#include "vehicle.h"
#include <string>
#include <vector>

#define parking_H

using namespace std;

class Parking {
private:
    int parkingSlot = 20;
    int status[20];
    string parkedVehicle[20];

public:
    Parking() {};
    ~Parking() {};
    
    string parkVehicle();
    void removeVehicle();
    //double generateBill();
    void menu();
};