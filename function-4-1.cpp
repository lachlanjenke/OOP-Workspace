#include <iostream> // Libraries
using namespace std; // Namespace

int *readNumbers() {
    int length = 4; // Initialise variables

    if (length < 1) { // If length 0 or negative return 0
        return 0; 
    }
    
    int *numbers_arr = new int[length]; // Dynamically initialise array

    for (int i = 0; i < length; i++) { // Prompt user for the values
        cin >> numbers_arr[i]; 
    }

    return numbers_arr; // Return pointer
}

int secondSmallestSum(int *numbers,int length) {
    if (length < 1) { // If length 0 or negative
        return 0; 
    }

    int secondSmallestSum = numbers[0]+numbers[1], smallestSum = numbers[0], sum = 0, counter = 0; // Initialise variables

    for (int i = 0; i < length; i++) { // Looping through each element of the array
        counter = i; // Set counter

        for (int j = i; j < length; j++) { // Looping through sub sets
            while (counter <= j) { // Summing sub sets
                sum += numbers[counter];
                counter++; // Increase counter
            }
         
            if (sum <= smallestSum) { // If smallest sum change variable
                smallestSum = sum; 
            } else if (sum <= secondSmallestSum) { // If second smallest sum change variable
                secondSmallestSum = sum;
            }
            sum = 0; // Reset sum
            counter = i; // Reset counter
        }
    }

    return secondSmallestSum; // Return desired value
}