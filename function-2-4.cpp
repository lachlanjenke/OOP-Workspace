#include <iostream> // Include libraries
using namespace std; // Specifying namespace

int array_max(int integers[], int length) {
    int max = 0; // Initialise variables

    if (length <= 0) { // Return false if length is less than or equal to 0
        return -1; 
    }

    max = integers[0]; // Set max as first value
    
    for (int i = 0; i < length; i++) { // Find max
        if (integers[i] > max) {
            max = integers[i]; // Set new max value if found
        }
    }
    
    return max; // Return result
}

int array_min(int integers[], int length) {
    int min = 0; // Initialise variables 

    if (length <= 0) { // Return false if length is less than or equal to 0
        return -1; 
    }

     min = integers[0]; // Set max as first value
    
    for (int j = 0; j < length; j++) { // Find minx
        if (integers[j] < min) {
            min = integers[j]; // Set new min value if found
        }
    }
    
    return min; // Return result
}

int sum_min_max(int integers[], int length) {
    int min = 0, max = 0, sum = 0; // Initialise variables   

    if (length <= 0) { // Return false if length is less than or equal to 0
        return -1; 
    }

    max = array_max(integers,length); // Call function to find max
    min = array_min(integers,length); // Call function to find min

    sum = max + min; // Find sum of max and min

    return sum; 

}