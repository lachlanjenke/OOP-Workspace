#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include <iostream>
#include <time.h>
#include "Vehicle.h"

using namespace std;

class Motorbike : public Vehicle {
    private:
    public:
    Motorbike(); // Default constructor
    Motorbike(int ID); // Function for creating vehicle 
    int getParkingDuration(); // Function for returning total time parked
};

#endif