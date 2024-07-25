#include <iostream> // Include libraries
using namespace std; //Specifying namespace 

int array_sum(int array[], int n) {
    int total = 0; // Intialising return variable
    for (int i = 0; i < n; i++) { 
        total += array[i];  
    }

    return total; 
}