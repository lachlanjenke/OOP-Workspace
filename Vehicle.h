#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <time.h>

using namespace std;

class Vehicle {
    private:
        time_t timeOfEntry; 
        int ID;
    public:
        Vehicle(); // Default constructor
        Vehicle(int ID); // Function for creating vehicle 
        int getID(); // Function for returning ID
        time_t getTimeOfEntry(); // Function for returning time of entry
        virtual int getParkingDuration(); // Function for returning the parking duration
};

#endif