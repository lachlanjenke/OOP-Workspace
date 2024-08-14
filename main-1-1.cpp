#include <iostream> // Libraries
using namespace std; // Namespace

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main() {
    int *numbers_ptr = readNumbers(); // Call function to read in numbers
    int length = 10;

    if (length < 1) { // If length 0 or negative return 0
        return 0; 
    }

    printNumbers(numbers_ptr,length); // Call function to print the numbers

    delete numbers_ptr; // Free memory

    return 0; // End code
}