#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern int min_element(int array[], int n); // Specifying where the function is

int main() {
    int array[5] = {5,3,6,1,8}; // Initialising variables
    int n = sizeof(array)/sizeof(array[0]); 

    cout << "The min value is: " << min_element(array,n) << endl; // Print min value

    return 0; // End of code

}