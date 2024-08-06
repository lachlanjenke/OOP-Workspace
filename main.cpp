#include "workshop.h" //Include other files
#include <iostream> // Include libraries

using namespace std; // Specify namespace

int main() {
    double double_var = 12, double_array[5] = {1,2,3,4,5}, max = double_array[0], M = 3.141; // Initialise variables
    char char_var = 'a'; 
    int arr_length = sizeof(double_array)/sizeof(double), N = 5; 

    double *double_ptr = &double_var, *array_ptr = &double_array[0]; // Initialise pointers
    char *char_ptr = &char_var;

    cout << "char_ptr = " << char_ptr << ", double_ptr = " << *double_ptr << endl << endl;  // Print values using pointers

    changeValue(double_ptr); // Call function to change value

    cout << "Value of double_var is now " << *double_ptr << endl << endl; // Output result

    cout << "The array should be printed as "; // Print expected result
    for (int i = 0; i < arr_length; i++) {
        cout << double_array[i] << " "; 
    }
    cout << endl; // New line

    cout << "The function prints the array as ";  // Output result
    printArray(array_ptr,arr_length);
    cout << endl; 
    
    cout << "The max value in the double array is "; // Print expected result
    for (int i = 0; i < arr_length; i++) {
        if (double_array[i] > max) {
            max = double_array[i]; 
        }
    }
    cout << max << endl;  
    cout << "The max according to the function is " << arrayMax(array_ptr,arr_length) << endl << endl; // Output result

    double *dynamic_ptr = dynamicArray(N,M); // Call function to create pointer
    printArray(dynamic_ptr,N);
    cout << "The max according to the function is " << arrayMax(dynamic_ptr,N) << endl << endl; // Output result

    delete[]dynamic_ptr; 

    return 0; 
}