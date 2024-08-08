#include <iostream> // Library
using namespace std; // Namespace

void modifyArray(double *array, int size, double value) {
    for (int j = 0; j < size; j++) { // Loop through each element
        *(array + j) = *(array + j) + value; // Add value
    }

}