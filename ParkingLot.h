#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <iostream>
#include "Vehicle.h"

using namespace std;

class ParkingLot {
    private:
        int parkingLotMax,vehicleCount;
        Vehicle **vehicles; 
    public:
        ParkingLot(); // Default constructor 
        ParkingLot(int parkingLotMax); // Function to create parking lot 
        int getCount(); // Function to return current number of vehicles
        void parkVehicle(Vehicle *vehicle); // Function to park vehicle 
        void unparkVehicle(int ID); // Function to unpark vehicle 
        int countOverstayingVehicles(int maxParkingDuration); // Function to count over staying vehicles
}; 
#endif