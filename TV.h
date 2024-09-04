#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
    private:
        double screenSize;
    public: 
        TV(int powerRating, bool isOn, double screenSize); // Constructor for TV
        TV():TV(0,false,0){} // Defeault constructor
        void setScreenSize(double screenSize); // Function to set screen size
        double getScreenSize(); // Function to return screen size
        double getPowerConsumption(); // Function to return power consumption

}; 

#endif