#include <iostream> // Include libraries
#include <string>
#include <cmath>
using namespace std; // Specifying namespace

extern void print_binary_str(string decimal_number); // Specify where the function is

int main() {
    string decimal_number = "25"; // Initialise variables

    print_binary_str(decimal_number); // Call function
    
    return 0; // End code
}