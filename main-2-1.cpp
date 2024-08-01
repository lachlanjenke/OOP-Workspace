#include <iostream> // Include libraries
#include <string>
using namespace std; // Specifying namespace

extern void print_binary_str(string decimal_number); // Specify where the function is

int main() {
    string decimal_number = "25"; 
    print_binary_str(decimal_number); 
    
    return 0; // End code
}