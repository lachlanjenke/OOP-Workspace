#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern int max_element(int array[], int n); // Specifying where the function is

int main() {
    int array[5] = {5,3,10,1,8}; // Initialising variables
    int n = sizeof(array)/sizeof(array[0]); 

    cout << "The max value is: " << max_element(array,n) << endl; // Print max value

    return 0; // End of code

}