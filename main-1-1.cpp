#include <iostream> // Include libraries
using namespace std; //Specifying namespace 

extern int array_sum(int array[], int n); //Specifying where the function is

int main() {
    int test_array[5] = {1,2,3,4,5};
    int n = sizeof(test_array)/sizeof(test_array[0]); 
    cout << n << endl; 
    cout << "The sum is: " << array_sum(test_array,n) << endl; 
    return 0; 
}