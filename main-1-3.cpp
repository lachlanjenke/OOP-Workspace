#include <iostream> // Library
using namespace std; // Namespace

extern double* duplicateArray(double* array, int size); 

int main() {
    double double_array[5] = {3,-1,5,6,0}; // Initialise variables
    int size = sizeof(double_array)/sizeof(double);

    double *ptr = &double_array[0]; // Create pointer

    double *copy_ptr = duplicateArray(ptr,size); // Call function and create variable to store pointer

    cout << "The array should be: "; 
     for (int k = 0; k < size; k++) { // Printing what the array should look like
        cout << *(ptr + k) << " ";
    }
    cout << endl; // New line

    cout << "The copied array is: "; // Checking if array was copied sucessfully 
    for (int j = 0; j < size; j++) { 
        cout << *(copy_ptr + j) << " ";
    }
    cout << endl; // New line


    return 0; // End code
}