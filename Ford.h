#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford : public Car {
    private:
        int badgeNumber; 
        float litresOfFuel; 
    public:
        Ford(); 
        Ford(int badgeNumber, int price); 
        void set_badgeNumber(int badgeNumber); 
        void set_litresOfFuel(float litresOfFuel); 
        int get_badgeNumber() {return badgeNumber;}
        float get_litresOfFuel() {return litresOfFuel;}
        void refuel(int litres); 
        void drive(int kms);
        ~Ford() {}
}; 

#endif