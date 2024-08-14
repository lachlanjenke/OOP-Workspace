#include <iostream> // Libraries
using namespace std; // Namespace

int *readNumbers() {
    int length = 10; // Initialise variables

     if (length < 1) { // If length 0 or negative return 0
        return 0; 
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

void hexDigits(int *numbers,int length) {
    for (int i = 0; i < length; i++) { 
        cout << i << " " << numbers[i] << " "; 
        switch (numbers[i]) {
            case 10: 
                cout << "A" << endl; 
                break; 
            case 11:
                cout << "B" << endl; 
                break;
            case 12:
                cout << "C" << endl; 
                break; 
            case 13:
                cout << "D" << endl; 
                break; 
            case 14: 
                cout << "E" << endl; 
                break; 
            case 15: 
                cout << "F" << endl; 
                break; 
            default: 
                cout << numbers[i] << endl; 
                break;
        }
    }
}