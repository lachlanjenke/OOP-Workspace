#include <iostream> // Include libraries
using namespace std; // Specifying namespace

void count_digits(int array[4][4]) {
    int counter = 0; // Initialise variables 

    for (int i = 0; i < 10; i++) { // Checks for numbers 0 - 9
        for (int rows = 0; rows < 4; rows++) { // Loops for rows
            for (int cols = 0; cols < 4; cols++) { // Loops for cols
                if (array[rows][cols] == i) { // Check if number in array = i
                    counter++; // Increase counter
                }
            }
        }
        cout << i << ":" << counter << ";"; // Output
        counter = 0; // Reset counter
    }

    cout << endl; // New line

}