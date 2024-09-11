#include "Student.h"

// Constructors / Destructors
Student::Student()
{
   setName("");
   this->id = 0; 
}

Student::Student(string name, int id)
{
    setName(name);
    this->id = id; 
}

// Functions
int Student::getID()
{
    return this->id; 
}