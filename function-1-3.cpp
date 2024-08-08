#include <iostream> // Library
using namespace std; // Namespace

double* duplicateArray(double* array, int size) {
    double *copy_array = new double[size]; // Allocate new array of the same size

    for (int i = 0; i < size; i++) { // Copying values
        *(copy_array + i) = *(array + i); 
    }

    return copy_array; // Return pointer

}