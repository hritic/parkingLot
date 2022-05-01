#include "vehicle.h"
#include <string>
#include <vector>

using namespace std;

class Parking {
private:
    int parkingSlot;
    int status[parkingSlot];

public:
    string parkVehicle();
    void removeVehicle();
    double generateBill();
    void menu();
}