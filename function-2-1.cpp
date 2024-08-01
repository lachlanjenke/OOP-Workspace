#include <iostream> // Include libraries
#include <string> 
using namespace std; // Specifying namespace

void print_binary_str(string decimal_number) {
    int base10Number = stoi(decimal_number), counter = 0, length = 0; // Intialise variables
    string base10String = "";

      while (pow(2,counter) < base10Number) { // Check what power of 2 the conversion will go up to
        counter++; 
    }

    length = counter; // Copy value

    int *binaryArray = new int[length]; // Allocate memory

    counter--; // Decrease counter by 1

     while (base10Number/2 != 0) { // Conerting to binary
        binaryArray[counter] = base10Number - (base10Number/2) * 2;
        base10Number = base10Number/2; 
        counter--; 
    }

    binaryArray[counter] = 2 - base10Number; // Final conversion

   for (int i = 0; i < length; i++) { // Convert to string
    base10String += to_string(binaryArray[i]);
   }

   cout << base10String << endl; // Output

   delete[] binaryArray; // Free memory
}