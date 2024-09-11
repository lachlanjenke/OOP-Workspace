#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Person.h"

using namespace std;

class Course {
    private:
        Person **persons;
        string name;
        int id,currentPeople,maxPeople; 
    public:
        // Constructors 
        Course();
        Course(string name, int id); 
        ~Course();

        // Functions
        void addPerson(Person *person);
        string getName(); 
        int getID();
};

#endif