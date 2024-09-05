#include <iostream> 
#include "Car.h"
#include "Ford.h" 

Ford::Ford() {
    set_price(0);
    set_emissions(0);
    set_badgeNumber(0);
    set_litresOfFuel(60);
}

Ford::Ford(int badgeNumber, int price) {
    set_price(price); 
    set_emissions(0);
    set_badgeNumber(badgeNumber);
    set_litresOfFuel(60);
}
void Ford::set_badgeNumber(int badgeNumber) {
    this->badgeNumber = badgeNumber; 
}

void Ford::set_litresOfFuel(float litresOfFuel) {
    this->litresOfFuel = litresOfFuel; 
}
    
void Ford::refuel(int litres) {
    if (litresOfFuel < 60) {
        litresOfFuel += litres; 
        if (litresOfFuel > 60) {
            litresOfFuel = 60; 
        }
    } else {
        litresOfFuel = 60;
    }
}

void Ford::drive(int kms) {
    float tempEmissions = 0; 
    float tempKms = kms; 
    if (litresOfFuel > 0) {
        litresOfFuel -= tempKms/5; 
        tempEmissions = get_emissions(); 
        tempEmissions += 234 * kms; 
        set_emissions(tempEmissions);
        if (litresOfFuel < 0) {
            litresOfFuel = 0;
        }
    } else {
        litresOfFuel = 0; 
    }
}