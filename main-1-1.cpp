#include <iostream>
#include "Car.h"

using namespace std;

int main() {
    Car raceCar(10000); // Create car

    //Testing functions
    raceCar.set_emissions(10); 

    cout << "The race car has a price " << raceCar.get_price() << " has emissions " << raceCar.get_emissions() << endl; 

    raceCar.set_price(raceCar.get_price()*2); 
    cout << "The race cars price has doubled and is now " << raceCar.get_price() << endl; 
    raceCar.drive(100);
    cout << "The race car has drove 100 km and now has emissions " << raceCar.get_emissions() << endl; 

    return 0;   
}   