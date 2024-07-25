#include <iostream> // Include libraries
using namespace std; // Specifying namespace

bool is_descending(int array[], int n) {

    if (n < 1) { // if n is less than 1
        return false; 
    }

    for (int i = 1; i < n; i++) { // Check if descending
        if (array[i] > array[i-1]) {
            return false; 
        }

    }

    return true; // Return true if descending
}