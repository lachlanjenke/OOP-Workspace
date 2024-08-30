#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <time.h>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
    private:
    public:
    Car(); // Default constructor
    Car(int ID); // Function for creating vehicle 
    int getParkingDuration(); // Function for returning the total time parked
};

#endif