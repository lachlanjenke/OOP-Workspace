#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern bool is_descending(int array[], int n); // Specify where function is

int main() {
    int array[7] = {7,6,5,4,3,2,1};
    int n = sizeof(array)/sizeof(int); 

    cout << "1 if the array is descending, 0 if not: " << is_descending(array,n) << endl; // Call and output function

    return 0; // End code 


}