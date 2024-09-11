#include "Person.h"
// Constructors
Person::Person()
{
    this->name = ""; 
}

Person::Person(string name)
{
    this->name = name; 
}

Person::~Person()
{
}

// Functions
void Person::setName(string name)
{
    this->name = name; 
}

string Person::getName()
{
    return string(name);
}
