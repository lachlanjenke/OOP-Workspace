#include <iostream>
#include <time.h>
#include "Bus.h"

using namespace std;

// Default constructor 
Bus::Bus() : Vehicle() { }

// Function for creating car
Bus::Bus(int ID) : Vehicle(ID) { }

// Function for returning the total time parked
int Bus::getParkingDuration() {
    int timeParked = (time(nullptr) - getTimeOfEntry())*0.75; 
    return timeParked; 
}