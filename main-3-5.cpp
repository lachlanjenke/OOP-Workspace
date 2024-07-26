#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern double sum_even(double array[], int n); // Specify where function is

int main() {
    double array[5] = {1,2,3,4,5}; // Intialise variables
    int n = sizeof(array)/sizeof(double); 

    cout << "The sum of the even elements is " << sum_even(array,n) << endl; 
    
    return 0; // End of code
}