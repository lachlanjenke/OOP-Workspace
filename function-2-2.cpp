#include <iostream> // Include libraries
using namespace std; // Specifying namespace

int binary_to_int(int binary_digits[], int number_of_digits) {
    int highestPower = number_of_digits - 1, integer = 0; // Initialise variables 

    for (int i = 0; i < number_of_digits; i++) { // Loop through each element of the array
        if (binary_digits[i] == 1) { // If there is a 1
            integer += pow(2,highestPower); // Converting binary to base10
        }
        
        highestPower--; // Decrease variable
    }

    return integer; // Return the result 

}