#include "Course.h"

using namespace std; 

// Constructors / Destructors

Course::Course()
{
    this->name = "";
    this->id = 0;
    this->currentPeople = 0;
    this->maxPeople = 0;
}

Course::Course(string name, int id)
{   
    this->name = name;
    this->id = id;
    this->currentPeople = 0;
    this->maxPeople = 10;

    persons = new Person*[maxPeople];
}

Course::~Course()
{
    delete[] persons;
}

// Functions
void Course::addPerson(Person *person)
{
    if (currentPeople >= maxPeople) {
        maxPeople *= 2; 
        Person **newPersons = new Person*[maxPeople]; 

        for (int i = 0; i < currentPeople; i++) {
            newPersons[i] = persons[i];
        }

        delete[] persons;
        persons = newPersons; 
    }

    persons[currentPeople] = person; 
    currentPeople++; 

}

string Course::getName()
{
    return name;
}

int Course::getID()
{
    return id;
}
