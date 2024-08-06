#include <iostream>
using namespace std; 

void changeValue(double *double_ptr) { // Change the value stored by the double ptr
    *double_ptr = 42; 
}

void printArray(double *array_ptr, int arr_length) { // Print the array using the pointer
    for (int i = 0; i < arr_length; i++) { 
        cout << *(array_ptr + i) << " "; // Adding i to the pointer to move to the next element
    }                                    // And then deferencing it
    cout << endl; 
}

double arrayMax(double *array_ptr, int arr_length) {
    double max = *array_ptr; // Initialise variables

      for (int i = 0; i < arr_length; i++) { 
        if (*(array_ptr + i) > max) {
            max = *(array_ptr + i);
        }
    }
    
    return max; 

}

double* dynamicArray(int N, double M) {
    double *dynamic_array = new double[N]; // Initialise array

    for (int i = 0; i < N; i++) { // Fill array
        dynamic_array[i] = M;
    }

    double *dynamic_ptr = &dynamic_array[0]; // Create pointer to first element

    return dynamic_ptr; 
}