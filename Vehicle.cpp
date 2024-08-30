#include <iostream>
#include <time.h>
#include "Vehicle.h"

using namespace std;

// Default constructor
Vehicle::Vehicle() {
    timeOfEntry = time(nullptr); 
    ID = 0; 
} 

// Function for creating vehicle 
Vehicle::Vehicle(int ID) {
    timeOfEntry = time(nullptr);
    this->ID = ID; 
} 

// Function for returning ID
int Vehicle::getID() {
    return ID; 
}

// Function for returning time of entry
time_t Vehicle::getTimeOfEntry() {
    return timeOfEntry; 
}

// Function for returning the parking duration
int Vehicle::getParkingDuration() {
    int timeParked = time(nullptr) - this->timeOfEntry; 
    return timeParked; 
}
