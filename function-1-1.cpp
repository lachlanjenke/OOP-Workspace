#include <iostream> // Include libraries
using namespace std; // Specifying namespace

int sum_diagonal(int array[4][4]) {
    int sum = 0; // Initialise variables


    for (int i = 0; i < 4;i++) { // Loop for number of rows
        for (int j = 0; j < 4;j++) { // Loop for number of columns
            if (i == j) { // If row number = column number add value to sum
                sum += array[i][j]; 
            }
        }
    }

    return sum; // Return sum

}