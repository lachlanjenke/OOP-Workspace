#include <iostream>
#include <time.h>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std; 

int main() {
    ParkingLot parkingLot(10); 
    int maxParkingDuration = 0; 

    cout << "Input the max parking duration in seconds: "; 
    cin >> maxParkingDuration; 

    while (parkingLot.getCount() != 10) {
        int vehicleType = 0, ID = 0; // Initialise variables for the for loop

        // Prompt user for input for vehicle type
        cout << "Enter the type of vehicle you wish to enter (1 = Car, 2 = Bus, 3 = Motorbike): ";
        cin >> vehicleType; 

        // Prompt user for input for ID
        cout << "Enter the ID for the vehicle: "; 
        cin >> ID; 

        Vehicle *vehicle = nullptr; // Initialise vehicle pointer

        switch (vehicleType) {
            case 1: 
                vehicle = new Car(ID); // Set pointer to Car
                parkingLot.parkVehicle(vehicle); 
                break; 
            case 2:
                vehicle = new Bus(ID); // Set pointer to Bus
                parkingLot.parkVehicle(vehicle); 
                break; 
            case 3: 
                vehicle = new Motorbike(ID); // Set pointer to Motorbike
                parkingLot.parkVehicle(vehicle); 
                break;
            default: 
                cout << "Invalid vehicle input" << endl; // If not 1 2 or 3 inform user input is invalid
                continue; 
        }

    }
    
    cout << "The number of overstaying vehicles is " << parkingLot.countOverstayingVehicles(maxParkingDuration) << endl; 

    return 0; 
}