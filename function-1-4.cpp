#include <iostream> // Include libraries
using namespace std; // Specifying namespace

int sum_two_arrays(int array[], int secondarray[], int n) {
    int sum_of_arrays = 0; // Intialise variables 

    for (int i = 0; i < n; i++) {
        sum_of_arrays += array[i] + secondarray[i]; // Adding arrays
    }

    return sum_of_arrays; // Return the sum of the two arrays

} 