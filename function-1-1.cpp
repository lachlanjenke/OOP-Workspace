#include <iostream> // Libraries
using namespace std; // Namespace

int *readNumbers() {

    int *numbers_arr = new int[10]; // Dynamically initialise array

    if (numbers_arr == nullptr) { // If memory allocation
        return nullptr; 
    }

    for (int i = 0; i < 10; i++) { // Prompt user for the other values
        cin >> numbers_arr[i]; 
    }

    return numbers_arr; // Return pointer
}

void printNumbers(int *numbers,int length) {
  
        for (int i = 0; i < length; i++) { // Printing values
            cout << i << " " << numbers[i] << endl; 
        }

}