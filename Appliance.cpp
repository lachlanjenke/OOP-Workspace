#include <iostream>
#include "Appliance.h" 

using namespace std; 

Appliance::Appliance(int powerRating, bool isOn) {
    this->powerRating = powerRating; 
    this->isOn = isOn; 
}

void Appliance::turnOn() {
    isOn = true; 
}

void Appliance::turnOff() {
    isOn = false;
}

void Appliance::set_powerRating(int powerRating) {
    this->powerRating = powerRating; 
}

int Appliance::get_powerRating() {
    return this->powerRating; 
}

bool Appliance::get_isOn() {
    return this->isOn;
}

