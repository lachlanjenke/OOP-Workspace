#ifndef BUS_H
#define BUS_H

#include <iostream>
#include <time.h>
#include "Vehicle.h"

using namespace std;

class Bus : public Vehicle {
    private:
    public: 
    Bus(); // Default constructor
    Bus(int ID); // Function for creating vehicle 
    int getParkingDuration(); // Function for returning total time parked

};

#endif