#include <iostream> // Include libraries
using namespace std; //Specifying namespace 

int array_sum(int array[], int n) {
    int total = 0; // Intialising return variable

     if (n < 0) { // Return 0 if n is less than 1
        return total;
    }
    for (int i = 0; i < n; i++) { 
        total += array[i];  //Adding values
    }

    return total; //Return values
}