#include <iostream> // Include libraries
using namespace std; // Specifying namespace

extern bool is_fanarray(int array[], int n); 

int main() {
    int array[5] = {1,2,3,2,1};
    int n = sizeof(array)/sizeof(int); 

    cout << "0 if fail, 1 if true: " << is_fanarray(array,n) << endl; 

    return 0;
}