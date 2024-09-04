#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>

class Appliance {
    private:
        int powerRating; 
        bool isOn; 
    public: 
        Appliance();// Defeault constructor 
        Appliance(int powerRating, bool isOn); // Function for creating Appliance class
        void turnOn(); // Function to turn on appliance
        void turnOff(); // Function to turn off appliance
        void set_powerRating(int powerRating); // Function to set power rating
        void set_isOn(bool isOn); // Function to set isOn
        int get_powerRating(); // Function to view power rating
        bool get_isOn(); // Function to view isOn status
        virtual double getPowerConsumption(){return 0;} // Virtual function for getting power consumption
        virtual ~Appliance() {} // Virtual destructor
        
};
#endif