#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern void print_summed(int array1[3][3],int array2[3][3]); // Specifying where function is

int main() {
    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}}; // Initialise arrays
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}};

    print_summed(matrix1,matrix2); // Call function

    return 0; // End code
}