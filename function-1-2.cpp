#include <iostream> // Libraries
#include <string.h> 
#include "Person.h" 

using namespace std; // Namepsace

PersonList createPersonList(int n) {
     PersonList peopleList; // Create list
     Person *array = new Person[n]; // Create array
     
     peopleList.people = array; // 
     peopleList.numPeople = n; 

    for (int i = 0; i < n; i++) { // Filling array
        array[i].name = "Jane Doe"; 
        array[i].age = 1; 
    }

    return peopleList; 
}