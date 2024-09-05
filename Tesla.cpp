#include <iostream> 
#include "Car.h"
#include "Tesla.h"

using namespace std; 

// Constructor
Tesla::Tesla() {
    set_price(0); 
    set_emissions(0);
    model = '\n'; 
    batteryPercentage = 100; 

}

// Constructor with parameters
Tesla::Tesla(char model, int price) {
    set_price(price); 
    set_emissions(0);
    set_model(model); 
    set_batteryPercentage(100);
} 

// Set model
void Tesla::set_model(char model) {
    this->model = model;
}

// Set battery
void Tesla::set_batteryPercentage(float batteryPercentage) {
    this->batteryPercentage = batteryPercentage; 
}

// Charge battery
void Tesla::chargeBattery(int mins) {
    if (batteryPercentage != 100) {
        batteryPercentage += 0.5 * mins; 
        if (batteryPercentage > 100) {
            batteryPercentage = 100; 
        }
    }
}

// Drive
void Tesla::drive(int kms) {
    int tempEmissions = 0; 
    if (batteryPercentage > 0) {
        batteryPercentage -= kms/5;
        tempEmissions = get_emissions();
        tempEmissions += 74 * kms; 
        set_emissions(tempEmissions);
        if (batteryPercentage < 0) {
            batteryPercentage = 0; 
        }
    } else {
        batteryPercentage = 0; 
    }
}