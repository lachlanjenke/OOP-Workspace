#include <iostream> 
#include "Car.h"
#include "Tesla.h"

using namespace std; 

int main() {
    Tesla Ymodel('Y',100000); // Create Tesla

    // Test Tesla functions
    cout << "The Tesla model " << Ymodel.get_model() << " costs " << Ymodel.get_price() << endl; 

    Ymodel.drive(151); 

    cout << "After driving 151 km the tesla has emissions " << Ymodel.get_emissions() 
    << " and charge " << Ymodel.get_batteryPercentage() << "%" << endl;

    Ymodel.chargeBattery(20); 

    cout << "Charging the tesla for 20 minutes increases the charge to " << Ymodel.get_batteryPercentage() << "%" << endl; 

    return 0;
}