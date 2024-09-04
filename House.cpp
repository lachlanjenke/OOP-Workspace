#include <iostream>
#include <string>
#include "Appliance.h" 
#include "TV.h"
#include "Fridge.h"
#include "House.h"

using namespace std;

House::House() {
    appliances = nullptr; 
    numAppliances = 0;
    currentNumAppliances = 0;
}

House::House(int numAppliances) {
    currentNumAppliances = 0; 
    this->numAppliances = numAppliances; 
    appliances = new Appliance*[this->numAppliances];
    for (int i = 0; i < numAppliances; i++) {
        appliances[i] = nullptr;
    }
}

bool House::addAppliance(Appliance* appliance) {
    appliances[currentNumAppliances] = appliance; 
    if (appliances[currentNumAppliances] == nullptr) {
        return false; 
    } else {
        currentNumAppliances++; 
        return true; 
    }
    
}

double House::getTotalPowerConsumption() {
    double totalPowerConsumption = 0;
    for (int i = 0; i < currentNumAppliances; i++) {
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption; 
}