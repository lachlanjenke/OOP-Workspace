#include <iostream> // Include libraries
#include <cmath>
using namespace std; // Specifying namespace

extern int binary_to_int(int binary_digits[], int number_of_digits); 

int main() {
    int number_of_digits = 0; // Initialise variables

    cout << "How many digits are in the binary number you wish to enter: "; // Prompt user for number of digits
    cin >> number_of_digits;

    int *binary_digits = new int[number_of_digits]; // Allocate memory for array

    cout << "Enter the first value of the binary number (left to right): "; // Input the first digit
    cin >> binary_digits[0]; 
    for (int i = 1; i < number_of_digits; i++) { // Input the other digits
        cout << "Enter the next value: "; 
        cin >> binary_digits[i]; 
    }

    cout << "The result is: " << binary_to_int(binary_digits,number_of_digits) << endl; 



    delete[] binary_digits; 
    return 0; // End code
}