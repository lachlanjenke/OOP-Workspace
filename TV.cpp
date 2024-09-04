#include <iostream>
#include <string>
#include "Appliance.h" 
#include "TV.h"

using namespace std; 

// Defeault constructor
TV::TV() {
    set_powerRating(0); 
    set_isOn(0); 
    screenSize = 0; 
}
// Constructor for TV
TV::TV(int powerRating, double screenSize) {
    set_powerRating(powerRating);
    this->screenSize = screenSize; 
}

// Function to set screen size
void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize; 
}

// Function to return screen size
double TV::getScreenSize() {
    return screenSize; 
}

// Function to return power consumption
double TV::getPowerConsumption() {
    double powerConsumption = 0;
    powerConsumption = get_powerRating() * (screenSize / 10); 
    return powerConsumption;
}