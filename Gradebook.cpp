#include "Gradebook.h"
#include "Grade.h"

// Constructor
Gradebook::Gradebook()
{
    this->maxGrades = 10;
    this->currentGrades = 0;

    grades = new Grade[maxGrades];
  
}

// Destructor
Gradebook::~Gradebook()
{
}


// Functions
void Gradebook::addGrade(int id, int course_id, string assignment, int value)
{   
    if (currentGrades >= maxGrades) {
        maxGrades *= 2; 
        Grade *newGrades = new Grade[maxGrades]; 

        for (int i = 0; i < currentGrades; i++) {
            newGrades[i] = grades[i];
        }

        delete[] grades;
        grades = newGrades; 
    }

    
    
    
}

