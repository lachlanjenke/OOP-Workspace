#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>
#include <string>
#include "Grade.h"

using namespace std;

class Gradebook {
    private:
        Grade* grades;
        int maxGrades, currentGrades;
    private:
        // Constructors / Destructors
        Gradebook();
        ~Gradebook(); 

        // Functions
        void addGrade(int id, int course_id, string assignment, int value);

};

#endif