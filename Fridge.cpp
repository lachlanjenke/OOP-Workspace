#include <iostream>
#include <string>
#include "Appliance.h" 
#include "Fridge.h"

using namespace std; 

Fridge::Fridge() {
    Appliance(); 
    volume = 0; 
}
Fridge::Fridge(int powerRating, bool isOn, double volume) {
    set_powerRating(powerRating);
    set_isOn(isOn);
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