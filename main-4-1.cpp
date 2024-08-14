#include <iostream> // Libraries
using namespace std; // Namespace

extern int *readNumbers(); 
extern int secondSmallestSum(int *numbers,int length); 

int main() {
    int length = 4; // Initialise variables

    int *numbers = readNumbers(); 

    cout << "The second smallest sum is: " << secondSmallestSum(numbers,length) << endl; // Call function

    return 0; 
}