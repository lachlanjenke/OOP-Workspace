#include <iostream> // Libraries
#include <string.h>
#include "Person.h" // Include .h file

using namespace std; 

extern PersonList createPersonList(int n); // Function location
extern PersonList shallowCopyPersonList(PersonList peopleList);    

int main() {
    int n = 0; // Initialise variables

    cout << "Enter the desired length of the array: "; // Prompt user for n
    cin >> n; 

    PersonList peopleList = createPersonList(n); // Call list function

    for (int i = 0; i < n; i++) {
        cout << peopleList.people[i].name << " " << peopleList.people[i].age << endl; // Checking if list was created right
    }

    cout << endl; // New line

    PersonList shallowCopy = shallowCopyPersonList(peopleList); // Call shallow copy function

     for (int i = 0; i < n; i++) {
        cout << shallowCopy.people[i].name << " " << shallowCopy.people[i].age << endl; // Checking if copied right
    }


    return 0; // End code

}