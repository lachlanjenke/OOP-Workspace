#include <iostream> // Include libraries
using namespace std; // Specifying namespace

int min_element(int array[], int n) { 
    int min = array[0]; // Initialise variable

    if (n < 1) { // If n is less than one
        return 0; 
    }

    for (int i = 0; i < n; i++) { // Finding min element 
        if (array[i] < min) {
            min = array[i]; 
        }
    }

    return min; // Return min value

}