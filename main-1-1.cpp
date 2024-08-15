#include <iostream>
#include <string.h>
#include "Person.h"

using namespace std; 

extern Person* createPersonArray(int n); 

int main() {
    int n = 0; // Initialise variables

    cout << "Enter the desired length of the array: "; // Prompt user for n
    cin >> n; 

    Person *array = createPersonArray(n); // Call function

    for (int i = 0; i < n; i++) {
        cout << array[i].name << " " << array[i].age << endl; // Checking if correct
    }

    delete[] array; // Free memory

    return 0; // End code

}