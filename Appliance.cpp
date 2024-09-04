#include <iostream>
#include "Appliance.h" 

using namespace std; 

Appliance::Appliance() {
    powerRating = 0;
    isOn = false; 
}

Appliance::Appliance(int powerRating) {
    this->powerRating = powerRating; 
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

void Appliance::set_isOn(bool isOn) {
    this->isOn = isOn; 
}

int Appliance::get_powerRating() {
    return this->powerRating; 
}

bool Appliance::get_isOn() {
    return this->isOn;
}

