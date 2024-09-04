#include <iostream>
#include <string>
#include "Appliance.h" 
#include "TV.h"

using namespace std; 

string printIsOn(Appliance appliance) {
     if (appliance.get_isOn()) {
        return "On";
    } else {
        return "Off"; 
    }

    return ""; 
}

int main() {
    TV smartTV(5,true,50);

    cout << "The TV with power rating " << smartTV.Appliance::get_powerRating() << " is currently " << printIsOn(smartTV) <<
    " and has a power consumption of " << smartTV.getPowerConsumption() << endl; 

    smartTV.turnOff();
    cout << "The fridge is now " << printIsOn(smartTV) << endl; 

    return 0;
}