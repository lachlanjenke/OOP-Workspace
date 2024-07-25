#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern int sum_two_arrays(int array[], int secondarray[], int n); //Specifying where the function is

int main() {
    int array[5] = {1,2,3,4,5}, secondarray[5] = {6,7,8,9,10}; // Intialising variables
    int n = sizeof(array)/sizeof(array[1]);

    cout << "The sum of the two arrays is: " << sum_two_arrays(array,secondarray,n) << endl; // Calling and outputting function

    return 0; // End code
}