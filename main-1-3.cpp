#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern void count_digits(int array[4][4]); 

int main() {
    int array[4][4]= { // Initialise variables
        {1,0,0,0},
        {0,1,0,0},
        {0,0,1,0},
        {0,0,0,1}
    }; 

    count_digits(array); // Call function

    return 0; // End
}