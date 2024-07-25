#include <iostream> // Include libraries
using namespace std; // Specifying namespace

int count_evens(int number) { 
    int even_amount = 0; // Intialise variable

    for (int i = 1; i <= number; i++) { // Count even numbers
        if (i % 2 == 0) {
            even_amount++; 
        }
    }

    return even_amount; // Return amount of even numbers
}