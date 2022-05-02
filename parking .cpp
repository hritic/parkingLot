#include "parking.h"
#include <bits/stdc++.h>

using namespace std;

void Parking::menu() {
    cout << " " << endl;
	cout << " " << endl;
	cout << "\t|||||||Welcome to PARKING MANAGER|||||||" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;

    int option;
    do {
        cout << "\n 1.\t -To Park vehicle\n";
        //cout << "\n 2.\t -To Generate Bill\n";
        cout << "\n 2.\t -To Remove vehicle\n";
        cout << "\n 0.\t -To exit program\n";
        cin >> option;

        switch(option) 
        {
            case 1:
                string ticket = parkVehicle();
                cout << "\nHey there! Your ticket is : " << ticket <<"\n Thank You!\n";
                break;
            
            /*case 2:
                generateBill();
                break;
            */
            case 2:
                removeVehicle();
                break;
            
            default:
                cout << "Please choose a valid Option!\n";
                
        }
    }
    while(option != 0);
}

string Parking::parkVehicle() {
    string vehicleNumber;
    string vehicleColor;

    int slot = -1;
    for(int i = 0;i < parkingSlot;i++)
    {
        if(status[i] == 0)
        {
            slot = i+1;
            status[i] == 1;
            parkedVehicle[i] = vehicleNumber;
            break;
        }
    }

    if(slot == -1)
    {
        cout <<"\nAll parking slots are occupied \n";
        return "Invalid";
    }

    else
    {
        cout << "\nHello!\n Please enter the Vehicle Number : \n";
        cin >> vehicleNumber;
        cout << "\nPlease enter the Vehicle color : \n";
        cin >> vehicleColor;
        string ticket = vehicleNumber + "_" + vehicleColor + "_" + to_string(slot);
        cout << "Your Car parked successfully\n";
        return ticket;
    }

}


void Parking::removeVehicle() {
    string ticket;

    cout <<"\n Hey there, Please enter your ticket : \n";
    cin >> ticket;
    int ticket_n = ticket.length();
    int slot = ticket[ticket_n-1] - '1';
    if(status[slot] == 1)
    {
        int i = 0;
        while(ticket[i] != '_')
        {
            if(parkedVehicle[slot][i] != ticket[i])
            {
                cout << "Oops!, Wrong ticket\n";
                return;
            }
        }
        cout << "\nParked car removed successfully\n";
        status[slot] = 0;
        parkedVehicle[slot] = "_";
    }
    else
    {
        cout << "\nParked car removed already Or wrong ticket\n";
    }
}
