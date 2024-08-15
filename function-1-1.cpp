#include <iostream> // Libraries
#include <string.h> 
#include "Person.h" 

using namespace std; // Namepsace

Person* createPersonArray(int n) {
    Person *array = new Person[n]; 

    for (int i = 0; i < n; i++) { // Filling array
        array[i].name = "John Doe"; 
        array[i].age = 0; 
    }

    return array; // Return pointer

} 