#include <iostream> // Libraries
using namespace std; // Namespace

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main() {
    int *numbers_ptr = readNumbers(); // Call function to read in numbers
    int length = 10;

    printNumbers(numbers_ptr,length); // Call function to print the numbers

    return 0; // End code
}