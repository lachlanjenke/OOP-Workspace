#include <iostream> // Libraries
using namespace std; // Namespace

extern int *readNumbers(); 
extern int secondSmallestSum(int *numbers,int length); 

int main() {
    int length = 4; // Initialise variables

    if (length < 1) { // If length 0 or negative return 0
        return 0; 
    }

    int *numbers = readNumbers(); 

    cout << "The second smallest sum is: " << secondSmallestSum(numbers,length) << endl; // Call function

    delete [] numbers; // Free memory

    return 0; // End code
}