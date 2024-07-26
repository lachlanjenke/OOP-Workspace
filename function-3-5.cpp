#include <iostream> // Include libraries
using namespace std; // Specifying namespace

double sum_even(double array[], int n) {
    double sum = 0; // Initialise array 

    if (n < 1) { // If n is less than 1 return 0
        return 0; 
    }

    for (int i = 0; i < n; i+=2) { // Sum the even elements
        sum += array[i]; 
    }

    return sum; // Return sum of even elements
}