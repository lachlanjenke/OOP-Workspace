 #include <iostream> // Libraries
using namespace std; // Namespace

extern int *readNumbers(); 
extern void hexDigits(int *numbers,int length); 
 
 int main() {
    int length = 10; // Initialise variables
    int *numbers = readNumbers(); // Call function to read in numbers

   if (length < 1) { // If length 0 or negative return 0
        return 0; 
    }

    hexDigits(numbers,length); // Call hex function. 

    delete[] numbers; // Free memory

    return 0; // End code
 }