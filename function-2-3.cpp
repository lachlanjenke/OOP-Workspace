#include <iostream> // Include libraries
using namespace std; // Specifying namespace

int sum_if_palindrome(int integers[], int length) {
    int sum = 0; // Initialise variables

    if (length <= 0) { // Return false if length is less than or equal to 0
        return -1; 
    }

    for (int j = 0; j < length; j++) { // Find the sum of the elements
        sum += integers[j];
    }

    return sum;

}

bool is_palindrome(int integers[], int length) {
    
    if (length <= 0) { // Return false if length is less than or equal to 0
        return false; 
    }

     for (int i = 0; i < length/2; i++) { // Checking if the array is a palindrome
        if (integers[i] != integers[length - 1 - i]) {
            return false; 
        }
    }

    return true; // If palindrome return true

}

int sum_array_elements(int integers[], int length) {
    int result = 0; // Initialise array
    
    if (length <= 0) {  // Return false if length is less than or equal to 0
        return -1; 
    } 

    if (is_palindrome(integers,length) == false) { // Call the function to check if the array is a palindrome
        return -2; 
    }

    result = sum_array_elements(integers,length); // Call the function to sum the elements

    return result; // Sum the results

}