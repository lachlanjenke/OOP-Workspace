#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern int count_evens(int number); // Specify where the function is

int main() {
    int number = 0; // Intialise variables

    cout << "Enter a number: ", cin >> number; // Prompt user to enter a number

    cout << "The number of evens between 1 and " << number << " is: " << count_evens(number) << endl; 
    

    return 0; // End of code
}