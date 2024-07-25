#include <iostream> // Include libraries
using namespace std; // Specifying namespace

bool is_ascending(int array[], int n) {

    if (n < 1) { // if n is less than 1
        return false; 
    }

    for (int i = 1; i < n; i++) { // Check if ascending
        if (array[i] < array[i-1]) {
            return false; 
        }

    }

    return true; // If ascending return true
}