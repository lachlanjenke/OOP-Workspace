#include <iostream> // Library
using namespace std; // Namespace

double arrayMin(double *array, int size) {
    double min = *array; // Initialise variable

    for (int i = 0; i < size; i++) { // Loop through each element
        if (*(array + i) < min) { // Finding min
            min = *(array+i);
        }
    }

    return min; // Return min
}