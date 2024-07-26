#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern void print_pass_fail(char grade); // Specify where the function is

int main() {
    char grade; // Declare variables 

    cout << "Enter a grade: "; // Prompt user for grade
    cin >> grade; 

    print_pass_fail(grade); // Run function

    return 0; // End code
}