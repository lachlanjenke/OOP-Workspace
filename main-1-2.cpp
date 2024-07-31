#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern int is_identity(int array[10][10]); 

int main() {
    int matrix[10][10] = {
        {1,0,0,0,0,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0},
        {0,0,0,1,0,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,1,0,0,0,0},
        {0,0,0,0,0,0,1,0,0,0},
        {0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,1},
    };

    cout << "Return 1 if the matrix is an indentity matrix, 0 if not: " << is_identity(matrix) << endl; 

    return 0; 
}