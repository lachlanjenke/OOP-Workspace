#include <iostream>
#include <time.h>
#include "Motorbike.h"

using namespace std;
// Default constructor 
Motorbike::Motorbike(): Vehicle() { }

// Function for creating car
Motorbike::Motorbike(int ID) : Vehicle(ID) { }

int Motorbike::getParkingDuration() {
    int timeParked = (time(nullptr) - getTimeOfEntry())*0.85; 
    return timeParked; 
}