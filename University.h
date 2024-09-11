#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include "Course.h"

using namespace std;

class University {
    private:
        Course **courses; 
        string name;
        string location; 
        int currentCourses, maxCourses;
    public:
        // Constructors / Destructors
        University();
        University(string name, string location); 
        ~University(); 

        // Functions
        void addCourse(int id, string name);
};

#endif