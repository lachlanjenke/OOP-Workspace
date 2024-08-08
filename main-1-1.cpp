#include <iostream> // Include library
using namespace std; // Namespace

extern double arrayMin(double *array, int size); // Specify function location 

int main() {
    double double_array[5] = {3,-1,5,6,0}; // Initialise variables
    int size = sizeof(double_array)/sizeof(double);

    double *ptr = &double_array[0]; // Create pointer

    cout << "The min value is " << arrayMin(ptr,size) << endl; // Call function

    return 0; // End code
}