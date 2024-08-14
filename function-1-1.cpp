#include <iostream> // Libraries
using namespace std; // Namespace

int *readNumbers(int length) {

    int *numbers_arr = new int[length]; // Dynamically initialise array

    if (numbers_arr == nullptr || length < 1) {
        return nullptr; 
    }

    cout << "Input the first value: "; // Prompt user for the first value
    cin >> numbers_arr[0]; 

    for (int i = 1; i < length; i++) { // Prompt user for the other values
        cout << "Input the next value: "; 
        cin >> numbers_arr[i]; 
    }

    return numbers_arr; // Return pointer
}

void printNumbers(int *numbers,int length) {
  
        for (int i = 0; i < length; i++) { // Printing values
            cout << i << " " << numbers[i] << endl; 
        }

}