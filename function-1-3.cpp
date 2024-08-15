#include <iostream> // Libraries
#include <string.h> 
#include "Person.h" // Include .h file

using namespace std; // Namepsace

PersonList createPersonList(int n) {
     PersonList peopleList; // Create list
     Person *array = new Person[n]; // Create array
     
     peopleList.people = array; // Set pointer location
     peopleList.numPeople = n; // Set size

    for (int i = 0; i < n; i++) { // Filling array
        array[i].name = "Jane Doe"; 
        array[i].age = 1; 
    }

    return peopleList; 
}

PersonList deepCopyPersonList(PersonList pl) {
    PersonList deepCopy; // Create new list

    deepCopy.numPeople = pl.numPeople; // Copy over size

    Person *arrayCopy = new Person[deepCopy.numPeople]; // Create copy array
    deepCopy.people = arrayCopy; 

    for (int i = 0; i < deepCopy.numPeople; i++) { // Copy over name and age
        deepCopy.people[i].name = pl.people[i].name; 
        deepCopy.people[i].age = pl.people[i].age; 
    }
    
    return deepCopy; // Return copy list
    
}