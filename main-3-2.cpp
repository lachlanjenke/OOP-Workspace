#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern int median_array(int array[], int n); // Specify where function is 

int main() {
    int array[5] = {2,3,1,5,4}; // Initialise variables 
    int n = sizeof(array)/sizeof(int); 

    cout << "The median is: " << median_array(array,n) << endl; 

    return 0; 
}