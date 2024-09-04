#include <iostream>
#include <string>
#include "Appliance.h" 
#include "Fridge.h"

using namespace std; 

Fridge::Fridge() {
    set_powerRating(0);
    set_isOn(false); 
    volume = 0; 
}
Fridge::Fridge(int powerRating, double volume) {
    set_powerRating(powerRating);
    this->volume = volume; 
    
}

void Fridge::setVolume(double volume) {
    this->volume = volume; 
}

double Fridge::getVolume() {
    return this->volume; 
}

double Fridge::getPowerConsumption() {
    double powerConsumption = 0;
    powerConsumption = get_powerRating() * 24 * (volume / 100); 
    return powerConsumption; 
}