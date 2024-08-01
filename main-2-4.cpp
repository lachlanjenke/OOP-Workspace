#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern int sum_min_max(int integers[], int length); // Specifying where the function is

int main() {
    int integers[6] = {2,5,1,4,6,3}, length = 6; // Initialise variables 

    cout << sum_min_max(integers,length) << endl; // Call function

    return 0; // End code
}