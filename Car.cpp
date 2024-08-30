#include <iostream>
#include <time.h>
#include "Car.h"


using namespace std;

// Default constructor 
Car::Car() : Vehicle() { }

// Function for creating car
Car::Car(int ID) : Vehicle(ID) { }

// Function for returning the total time parked
int Car::getParkingDuration() {
    int timeParked = (time(nullptr) - getTimeOfEntry())*0.9; 
    return timeParked; 
}