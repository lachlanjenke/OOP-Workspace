#include <iostream> // Libraries
using namespace std; // Namespace

int *readNumbers() {
    int length = 10; // Initialise variables

    if (length < 1) { // If length 0 or negative return 0
        return 0; 
    }

    int *numbers_arr = new int[length]; // Dynamically initialise array

    for (int i = 0; i < length; i++) { // Prompt user for the values
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

int *reverseArray(int *numbers1,int length) {

    if (length < 1) { // If length 0 or negative
        return 0; 
    }
    
    int *reversed_array = new int[length]; // Create new array

    for (int i = 0; i < length; i++) {
        reversed_array[i] = numbers1[length-1-i]; // Create the flipped array
    }

    return reversed_array; // Return array
}