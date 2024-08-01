#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern int sum_if_palindrome(int integers[], int length); 

int main() { 
    int integers[7] = {1,2,3,4,3,2,1}, length = 7; // Initialise array

    cout << sum_if_palindrome(integers,length) << endl; // Call functions

    return 0; 
}