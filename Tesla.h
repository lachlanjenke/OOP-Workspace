#ifndef TESLA_H
#define TESLA_H

#include "Car.h"

class Tesla : public Car {
    private:
        char model; // Initialise variables
        float batteryPercentage; 
    public:
        Tesla(); // Constructor
        Tesla(char model, int price); // Constructor with parameters
        void chargeBattery(int mins); // Charge battery
        void drive(int kms); // Drive
        void set_model(char model); // Set model
        void set_batteryPercentage(float batteryPercentage); // Set battery
        char get_model() {return model;}
        float get_batteryPercentage() {return batteryPercentage;}
        ~Tesla() {} // Deconstructor
}; 

#endif