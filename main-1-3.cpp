#include <iostream> // Include libraries
using namespace std; // Specifying namespace 

extern int num_count(int array[], int n, int number); // Calling function

int main() {
    int array[5] = {1,1,2,1,4}, given_number; // Initialise variables
    int n = sizeof(array)/sizeof(array[0]); 

    cout << "Enter the desired number: "; // Prompt user for desired number
    cin >> given_number; 

    cout << "The number of matches is: " << num_count(array,n,given_number) << endl; // Output number of matches

    return 0; 
}