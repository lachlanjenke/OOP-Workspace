 #include <iostream> // Libraries
using namespace std; // Namespace

extern int *readNumbers(); 
extern void hexDigits(int *numbers,int length); 
 
 int main() {
    int length = 10; // Initialise variables
    int *numbers = readNumbers(); // Call function to read in numbers

    hexDigits(numbers,length); // Call hex function. 

    return 0; // End code
 }