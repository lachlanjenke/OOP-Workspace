#include <iostream> // Libraries
using namespace std; // Namespace

extern int *readNumbers(); 
bool equalsArray(int *numbers1,int *numbers2,int length); 

int main() {
    int length = 5; // Initialise variables

    int *array1 = readNumbers(); // Call function to read in numbers
    int *array2 = readNumbers();

    cout << "The function will return 1 if the arrays are equal, 0 if not: " // Check if arrays are equal
    << equalsArray(array1,array2,length) << endl; 

    delete [] array1, array2;  // Free memory

    return 0; // End code
} 