#include <iostream> // Include libraries
using namespace std; // Specifying namespace

void print_summed(int array1[3][3],int array2[3][3]) {

     for (int rows = 0; rows < 3; rows++) { // Loop for rows
        for (int cols = 0; cols < 3; cols++) { // Loop for columns
            cout << array1[rows][cols] + array2[rows][cols] << " "; // Print out result
        }
        cout << endl; // New line
    }
}