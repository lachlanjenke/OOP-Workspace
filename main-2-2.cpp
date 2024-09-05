#include <iostream>
#include "Car.h"
#include "Ford.h"

using namespace std; 

int main() {
    Ford fordCar(31415,100000); // Create ford

    // Testing ford functions
    cout << "The Ford with badge number " << fordCar.get_badgeNumber() << " costs " << fordCar.get_price() << endl; 

    fordCar.drive(100); 

    cout << "After driving 100 km the ford car has emissions " << fordCar.get_emissions() 
    << " and fuel " << fordCar.get_litresOfFuel() << " L" << endl;

    fordCar.refuel(10);

    cout << "Refuling the car with 10 litres makes the current number of litres " << fordCar.get_litresOfFuel() << " L" << endl;
    
    return 0;
}