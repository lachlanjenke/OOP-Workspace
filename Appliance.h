#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>

class Appliance {
    private:
        int powerRating; 
        bool isOn; 
    public: 
        Appliance(int powerRating, bool isOn); // Function for creating Appliance class
        Appliance():Appliance(0,false){}// Defeault constructor 
        void turnOn(); // Function to turn on appliance
        void turnOff(); // Function to turn off appliance
        void set_powerRating(int powerRating); // Function to set power rating
        int get_powerRating(); // Function to view power rating
        bool get_isOn(); // Function to view isOn status
        virtual double getPowerConsumption(){return 0;} // Virtual function for getting power consumption
        
};
#endif