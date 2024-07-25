#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern void two_five_nine(int array[], int n); // Specifying where the function is

int main() {
    int array[7] = {2,5,9,9,2,5,5}; // Initialise variables
    int n = sizeof(array)/sizeof(array[0]);

    two_five_nine(array,n); // Call function

    return 0; // End of Code

}