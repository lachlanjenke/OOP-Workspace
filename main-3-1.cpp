#include <iostream>
#include <string>
#include "Appliance.h" 
#include "TV.h"
#include "Fridge.h"
#include "House.h"

using namespace std; 

int main() {
    House Home(3); 
    TV *livingRoomTV = new TV(4,50); 
    Fridge *kitchenFridge = new Fridge(5,100);
    TV *officeTV = new TV(3,30); 

     if (Home.addAppliance(livingRoomTV)) {
        cout << "Appliance 1 was added." << endl;
    } else {
        cout << "Appliance 1 was not added" << endl; 
    }
    if (Home.addAppliance(kitchenFridge)) {
        cout << "Appliance 2 was added." << endl;
    } else {
        cout << "Appliance 2 was not added" << endl; 
    }
    if (Home.addAppliance(officeTV)) {
        cout << "Appliance 3 was added." << endl;
    } else {
        cout << "Appliance 3 was not added" << endl; 
    }

    cout << "The total power consumption is " << Home.getTotalPowerConsumption() << endl; 

}