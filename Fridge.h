#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance {
    private:
        double volume; 
    public:
        Fridge(int powerRating, bool isOn, double volume); // Constructor for fridge
        Fridge():Fridge(0,false, 0){} // Default constructor 
        void setVolume(double volume); // Function to set volume
        double getVolume(); // Function to get volume
        double getPowerConsumption(); // Function to get power consumption 
};

#endif