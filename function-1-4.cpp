#include <iostream> // Libraries
#include <string.h> 
#include "Person.h" // Include .h file

using namespace std; // Namespace

PersonList createPersonList(int n) {
     PersonList peopleList; // Create list
     Person *array = new Person[n]; // Create array
     
     peopleList.people = array; // Set pointer location
     peopleList.numPeople = n; // Set size

    for (int i = 0; i < n; i++) { // Filling array
        array[i].name = "Jane Doe"; 
        array[i].age = 0; 
    }

    return peopleList; 
}

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList shallowCopy; // Create copy list
    
    shallowCopy.people = pl.people; // Set pointer
    shallowCopy.numPeople = pl.numPeople;

    return shallowCopy; 
}