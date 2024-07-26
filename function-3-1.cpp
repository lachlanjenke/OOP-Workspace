#include <iostream> // Include libraries
using namespace std; // Specifying namespace

bool is_fanarray(int array[], int n) { 

    for (int i = 0; i < (n/2);i++) {
        if (array[i] != array[n-1-i]) { 
            return false;
        } else { 
            if (i > 0 && array[i] <= array[i-1]) {
                return false; 
            }
        }
    }
    if (n % 2 == 1) {
        if (array[n/2] < array[n/2 - 1]) {
            return false; 
        }
    }
    return true; 
    
}