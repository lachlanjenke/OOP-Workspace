#include <iostream> // Include libraries
using namespace std; //Specifying namespace 

int num_count(int array[], int n, int number) { 
    int matches = 0; // Intialising variable for number of matches 

     if (n < 0) { // Return 0 if n is less than 1
        return matches;
     }

    for (int i = 0; i < n; i++) { 
        if (number == array[i]) { // Check for matches
            matches++; 
        }
    }

    return matches; // Return number of matches

}