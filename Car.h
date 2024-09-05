#ifndef CAR_H
#define CAR_H

class Car {
    private:
        int price, emissions; // Intialise variables
    public:
        Car(); // Constructor
        Car(int price); // Function to make car
        virtual void drive(int kms); // Drive function
        void set_price(int price); // Set price
        void set_emissions(int emissions); // Set emissions
        int get_price(); // Get price
        int get_emissions(); // Get emissions
        ~Car() {} // Deconstructor

};

#endif