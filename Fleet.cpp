#include <iostream>
#include "Tesla.h"
#include "Ford.h"
#include "Car.h"
#include "Fleet.h"

Fleet::Fleet() {
    fleet = new Car*[5]; 
    for (int i = 0; i < 5; i++) {
        fleet[i] = nullptr; 
    }
}

Fleet::Fleet(Tesla *Tesla1, Ford *Ford1, Car *Car1, Ford *Ford2, Tesla *Tesla2) {
    fleet = new Car*[5]; 
    fleet[0] = Tesla1;
    fleet[1] = Ford1; 
    fleet[2] = Car1;
    fleet[3] = Ford2;
    fleet[4] = Tesla2; 
}

Car **Fleet::get_fleet() {
    return fleet; 
}