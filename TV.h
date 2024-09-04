#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
    private:
        double screenSize;
    public: 
        TV(); // Defeault constructor
        TV(int powerRating, double screenSize); // Constructor for TV
        void setScreenSize(double screenSize); // Function to set screen size
        double getScreenSize(); // Function to return screen size
        double getPowerConsumption(); // Function to return power consumption
        ~TV() {}

}; 

#endif