#include <iostream> // Include libraries
#include <algorithm> 

using namespace std; // Specifying namespace

int median_array(int array[], int n) {
    int median = 0; // Intialise variables 

    if (n < 1) { // If n is less than 1 return 0
        return 0; 
    }

    sort(array,array+n); // Sort the array

    if (n % 2 == 1) { //If odd find mean
    median = array[n/2]; // Finding mean
    } else { 
      return 0;   // Return 0 if even
    }


    return median; 

}