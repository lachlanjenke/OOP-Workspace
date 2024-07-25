#include <iostream> // Include libraries
using namespace std; // Specifying namespace

int max_element(int array[], int n) { 
    int max = array[0]; // Initialise variable

    if (n < 1) { // If n is less than 1
        return 0; 
    }

    for (int i = 0; i < n; i++) { // Finding max element 
        if (array[i] > max) {
            max = array[i]; 
        }
    }

    return max; // Return max value

}