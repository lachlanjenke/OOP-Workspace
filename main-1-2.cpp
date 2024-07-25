#include <iostream> // Include libraries
using namespace std; //Specifying namespace 

extern double array_mean(int array[], int n); //Specifying where the function is

int main() {
    int test_array[7] = {3,9,11,4,9,1,8}; //Intialise variables
    int n = sizeof(test_array)/sizeof(test_array[0]); 

    cout << "The mean is: " << array_mean(test_array,n) << endl; //Print average
    return 0;
}