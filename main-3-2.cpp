#include <iostream> // Libraries
using namespace std; // Namespace

extern int *readNumbers(); 
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length); 

int main() {   
    int length = 10; // Initialise variables

    int *numbers1 = readNumbers(); // Prompt user to input array

    int *numbers2 = reverseArray(numbers1,length); 

    for (int i = 0; i < length; i++) { // Visually checking numbers1
        cout << numbers1[i] << " ";
    }
    cout << endl; // Newline

    for (int i = 0; i < length; i++) { // Visually checking numbers2
        cout << numbers2[i] << " ";
    }
    cout << endl; // Newline 

    cout << "0 if reversed, 1 if not: " << equalsArray(numbers1,numbers2,length) << endl; // Call function to check

    delete [] numbers1, numbers2;  // Free memory

    return 0; // End code
}