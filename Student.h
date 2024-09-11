#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
    private:
        int id;
    public:
        // Constructors / Destructors
        Student();
        Student(string name, int id); 

        // Functions
        int getID();
};

#endif