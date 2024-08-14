#include <iostream> // Libraries
using namespace std; // Namespace

int *readNumbers() {
    int length = 5; // Initialise variables
    int *numbers_arr = new int[length]; // Dynamically initialise array

    cout << "Input the first value: "; // Prompt user for the first value
    cin >> numbers_arr[0]; 

    for (int i = 1; i < length; i++) { // Prompt user for the other values
        cout << "Input the next value: "; 
        cin >> numbers_arr[i]; 
    }

    return numbers_arr; // Return pointer
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
    if (length < 1) { // If length is 0 or negative return false
        return false; 
    }

    for (int i = 0; i < length; i++) { // Compare values
        if (numbers1[i] != numbers2[i]) {
            return false; // If values aren't the same return false
        }
    }

    return true; // If values are the same return true
}