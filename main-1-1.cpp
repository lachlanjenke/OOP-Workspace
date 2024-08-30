#include <iostream>
#include <time.h>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    int totalVehicleAmount = 0; // Intialise variables

    cout << "Enter the number of vehicles you wish to input: "; // Prompt user for input
    cin >> totalVehicleAmount; 

    Vehicle **vehicleList = new Vehicle*[totalVehicleAmount]; 

    for (int i = 0; i < totalVehicleAmount; i++) {
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
                break; 
            case 2:
                vehicle = new Bus(ID); // Set pointer to Bus
                break; 
            case 3: 
                vehicle = new Motorbike(ID); // Set pointer to Motorbike
                break;
            default: 
                cout << "Invalid vehicle input" << endl; // If not 1 2 or 3 inform user input is invalid
                i--; // Prevents the counter from increasing
                continue; 
        }

        vehicleList[i] = vehicle; // Add to list

    }

    for (int i = 0; i < totalVehicleAmount; i++) { // Print ID and parking duration
        cout << "The vehicle with the ID: " << vehicleList[i]->getID() << 
        " has parking duration: " << vehicleList[i]->getParkingDuration() << " seconds." << endl;
    }

    delete[] vehicleList; 

    return 0; 
}