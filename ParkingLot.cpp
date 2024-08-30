#include <iostream>
#include <time.h>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

// Default constructor 
ParkingLot::ParkingLot() {
    parkingLotMax = 0;
    vehicleCount = 0; 
    vehicles = nullptr; 
}

// Function to create parking lot 
ParkingLot::ParkingLot(int parkingLotMax) {
    vehicles = new Vehicle*[parkingLotMax];
    this->parkingLotMax = parkingLotMax;
    vehicleCount = 0; 

} 

// Function to return current number of vehicles
int ParkingLot::getCount() {
    return vehicleCount; 
} 

// Function to park vehicle 
void ParkingLot::parkVehicle(Vehicle *vehicle) {
    if (vehicleCount != parkingLotMax) {
        vehicles[vehicleCount] = vehicle; 
        vehicleCount++; 
    } else {
        cout << "The lot is full" << endl; 
    }
} 

// Function to unpark vehicle
void ParkingLot::unparkVehicle(int ID) {
    bool wasInLot = false; 
    for (int i = 0; i < vehicleCount; i++) {
        if (ID == vehicles[i]->getID()) {
            vehicles[i] = nullptr; 
            wasInLot = true;
        }
    }

    if (wasInLot == true) {
        vehicleCount--;
    }

    if (wasInLot == false) {
        cout << "Vehicle not in the lot" << endl;
    }
}

// Function to count overstaying vehicles
int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int overstayingCount = 0; 
     for (int i = 0; i < vehicleCount; i++) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            overstayingCount++; 
        }
    }

    return overstayingCount;
}