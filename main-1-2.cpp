#include <iostream> // Library
using namespace std; // Namespace

extern void modifyArray(double *array, int size, double value); 

int main() {
    double double_array[5] = {1,2,3,4,5}; // Initialise variables
    int size = sizeof(double_array)/sizeof(double);
    double value = 7; 

    double *ptr = &double_array[0]; // Create pointer

    modifyArray(double_array,size,value); // Call function

    for (int i = 0; i < size; i++) { // Print array to check
        cout << double_array[i] << " "; 
    }; 
    cout << endl; // New line

    return 0; // End code
}