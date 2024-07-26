#include <iostream> // Include libraries
using namespace std; // Specifying namespace

double weighted_average(int array[], int n) {
    double weighted_av = 0; // Intialise variables 
    double frequency = 0;

    if (n < 1) {
        return 0; 
    }

    for (int i = 0; i < n; i++) {
        frequency = 0; 
        for (int j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                frequency++; 
            }
        }

        weighted_av += (array[i] * frequency / n);  
    }

    return weighted_av; 
}