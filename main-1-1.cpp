#include <iostream> // Libraries
using namespace std; // Namespace

extern int *readNumbers(int length);
extern void printNumbers(int *numbers,int length);

int main() {
    int length = 10;
    int *numbers_ptr = readNumbers(length); // Call function to read in numbers

    if (numbers_ptr == nullptr) { // Check if function worked
        cout << "Failed to allocate memory." << endl;
        return 1; // Exit with error
    }
    
    printNumbers(numbers_ptr,length); // Call function to print the numbers

    delete[] numbers_ptr; // Free memory

    return 0; // End code
}