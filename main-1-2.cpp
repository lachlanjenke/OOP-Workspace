#include <iostream>
#include <string.h>
#include "Person.h"

using namespace std; 

extern PersonList createPersonList(int n); 

int main() {
    int n = 0; // Initialise variables

    cout << "Enter the desired length of the array: "; // Prompt user for n
    cin >> n; 

    PersonList peopleList = createPersonList(n); // Call function

    for (int i = 0; i < n; i++) {
        cout << peopleList.people[i].name << " " << peopleList.people[i].age << endl; // Checking if correct
    }


    return 0; // End code

}