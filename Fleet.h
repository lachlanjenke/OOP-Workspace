#ifndef FLEET_H
#define FLEET_H

#include "Car.h"
#include "Tesla.h"
#include "Ford.h"

class Fleet : public Car {
    private:
        Car **fleet;
    public: 
        Fleet(); 
        Fleet(Tesla *Tesla1, Ford *Ford1, Car *Car1, Ford *Ford2, Tesla *Tesla2);
        Car **get_fleet();
        ~Fleet() {} 
};

#endif