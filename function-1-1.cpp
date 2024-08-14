#include <iostream> // Libraries
using namespace std; // Namespace

int *readNumbers() {
    int length = 10; // Initialise variables

    if (length < 1) { // If length 0 or negative
        return nullptr; 
    }

    int *numbers_arr = new int[length]; // Dynamically initialise array

    cout << "Input the first value: "; // Prompt user for the first value
    cin >> numbers_arr[0]; 

    for (int i = 1; i < length; i++) { // Prompt user for the other values
        cout << "Input the next value: "; 
        cin >> numbers_arr[i]; 
    }

    return numbers_arr; // Return pointer
}

void printNumbers(int *numbers,int length) {

    if (length >= 1) { // If length 0 or negative
        for (int i = 0; i < length; i++) { // Printing values
            cout << i << " " << numbers[i] << endl; 
        }
    }

}