#include <iostream> // Include libraries 
using namespace std; // Specifying namespace

void print_scaled(int array[3][3],int scale) {

    for (int rows = 0; rows < 3; rows++) { // Loop for rows
        for (int cols = 0; cols < 3; cols++) { // Loop for columns
            cout << scale * array[rows][cols] << " "; // Print out result
        }
        cout << endl; // New line
    }

}
