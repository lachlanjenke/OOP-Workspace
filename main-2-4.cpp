#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern bool is_ascending(int array[], int n); // Specify where function is

int main() {
    int array[7] = {1,2,3,4,5,6,7}; // Initialise variables
    int n = sizeof(array)/sizeof(int); 

    cout << "1 if the array is ascending, 0 if not: " << is_ascending(array,n) << endl; // Call and output function

    return 0; // End code 


}