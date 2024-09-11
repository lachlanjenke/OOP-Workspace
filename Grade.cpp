#include "Grade.h"

// Constructors / Destructors
Grade::Grade()
{
    this->assignment = ""; 
    this->value = 0;
}

Grade::Grade(string assignment, int value)
{
    this->assignment = assignment;
    this->value = value;
}

Grade::~Grade()
{
}

// Functions
string Grade::getAssignment()
{
    return this->assignment; 
}

int Grade::getValue()
{
    return this->value;
}
