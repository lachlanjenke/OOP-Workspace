#include <iostream>
#include <string>
#include "Appliance.h" 
#include "TV.h"

using namespace std; 

// Constructor for TV
TV::TV(int powerRating, bool isOn, double screenSize) : Appliance(powerRating,isOn), screenSize(screenSize) {}

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