#include <iostream> 
using namespace std; 

int main() {
    int userValue, base10,i=0,length; // Intialise variables 

    cout << "Enter the base 10 value you want to convert to base 2: "; // Prompt user for value 
    cin >> userValue; 

    base10 = userValue; // Copy value

    while (pow(2,i) < base10) { // Check what power of 2 the conversion will go up to
        i++; 
    }

    length = i; // Copy value

    int *array = new int[i]; // Allocate memory

    i--; // Decrease i by 1

    while (base10/2 != 0) { // Conerting to binary
        array[i] = base10 - (base10/2) * 2;
        base10 = base10/2; 
        i--; 
    }

    array[i] = 2 - base10; // Final conversion

    for (int j = 0; j < length; j++) { // Printing the binary conversion
        cout << array[j];
    }
    cout << endl; 

    delete[] array; // Free memory 

    return 0; 

}