#include <iostream>
#include <string>
#include "Appliance.h" 
#include "TV.h"
#include "Fridge.h"
#include "House.h"

using namespace std; 

int main() {
    House Home(3); 
    TV livingRoomTV(4,true,50); 
    Fridge kitchenFridge(5,true,100);
    TV officeTV(3,true,30); 
    
    TV *livingRoomTV_ptr = &livingRoomTV; 
    Fridge *kitchenFridge_ptr = &kitchenFridge; 
    TV *officeTV_ptr = &officeTV;


     if (Home.addAppliance(livingRoomTV_ptr)) {
        cout << "Appliance 1 was added." << endl;
    } else {
        cout << "Appliance 1 was not added" << endl; 
    }
    if (Home.addAppliance(kitchenFridge_ptr)) {
        cout << "Appliance 2 was added." << endl;
    } else {
        cout << "Appliance 2 was not added" << endl; 
    }
    if (Home.addAppliance(officeTV_ptr)) {
        cout << "Appliance 3 was added." << endl;
    } else {
        cout << "Appliance 3 was not added" << endl; 
    }

    cout << "The total power consumption is " << Home.getTotalPowerConsumption() << endl; 

}