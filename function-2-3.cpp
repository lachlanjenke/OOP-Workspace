#include <iostream> // Include libraries
using namespace std; // Specifying namespace

void two_five_nine(int array[], int n) {
    int num_twos = 0, num_fives = 0, num_nines = 0; // Intialise variables

    for (int i = 0; i < n; i++) { // Count 2's, 5's, 9's
        switch (array[i]) {
            case 2:
                num_twos++;
                break;
            case 5: 
                num_fives++;
                break;
            case 9:
                num_nines++;
                break; 
        }
    }

    cout << "2:" << num_twos << ";5:" << num_fives << ";9:" << num_nines << ";\n"; // Print result
}