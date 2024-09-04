#include <iostream>
#include <string>
#include "Appliance.h" 
#include "Fridge.h" 

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
    Fridge fridge(4,true,100);

    cout << "The fridge with power rating " << fridge.Appliance::get_powerRating() << " is currently " << printIsOn(fridge) <<
    " has a power consumption of " << fridge.getPowerConsumption() << endl; 

    fridge.turnOff();
    cout << "The fridge is now " << printIsOn(fridge) << endl; 

    return 0;
}