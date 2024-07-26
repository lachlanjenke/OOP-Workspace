#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern double weighted_average(int array[], int n); // Specify where function is

int main() {
    int array[7] = {1,2,1,4,1,3,1}; // Intialise variables
    int n = sizeof(array)/sizeof(int); 

    cout << "The weighted average is: " << weighted_average(array,n) << endl; // Call and output function

    return 0; // End of code
}