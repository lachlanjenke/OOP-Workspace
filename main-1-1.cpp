#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern int sum_diagonal(int array[4][4]); 

int main() {
    int array[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    cout << "The sum of the diagonal from the top left corner to the bottom right is: " << sum_diagonal(array) << endl; 

    return 0; 
}