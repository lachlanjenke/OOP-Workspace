#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern int sum_array_elements(int integers[], int length); 

int main() { 
    int integers[7] = {1,2,3,4,3,2,1}, length = 7; // Initialise array

    cout << sum_array_elements(integers,length) << endl; // Call functions

    return 0; 
}