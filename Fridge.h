#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance {
    private:
        double volume; 
    public:
        Fridge(); //Default constructor 
        Fridge(int powerRating, double volume); // Constructor for fridge with 2 vars
        Fridge(int powerRating, bool isOn, double volume); // Constructor for 3 vars
        void setVolume(double volume); // Function to set volume
        double getVolume(); // Function to get volume
        double getPowerConsumption(); // Function to get power consumption 
        ~Fridge() {} 
};

#endif