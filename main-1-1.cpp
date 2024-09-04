#include <iostream>
#include <string>
#include "Appliance.h" 

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
    Appliance fridge(4,false);

    cout << "The fridge with power rating " << fridge.get_powerRating() << 
    " is currently " << printIsOn(fridge) << endl; 

    fridge.set_powerRating(5); 
    fridge.turnOn();

    cout << "The fridge now has a power rating of " << fridge.get_powerRating() << 
    " and is currently " << printIsOn(fridge) << endl; 
  

    fridge.turnOff();
    cout << "The fridge is now " << printIsOn(fridge) << endl; 



    return 0;
}