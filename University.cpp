#include "University.h"

// Constructors / Destructors
University::University()
{
    this->name = "";
    this->location = "";
    this->currentCourses = 0;
    this->maxCourses = 0;
    this->courses = nullptr;
}

University::University(string name, string location)
{
    this->name = name;
    this->location = location;
    this->currentCourses = 0;
    this->maxCourses = 10; 
    courses = new Course*[maxCourses];
}

University::~University()
{
    delete[] courses; 
}


// Functions
void University::addCourse(int id, string name)
{
    if (currentCourses >= maxCourses) {
        maxCourses *= 2; 
        Course **tempCourses = new Course*[maxCourses];
        for (int i = 0; i < currentCourses; i++) {
            tempCourses[i] = courses[i];
        }
        delete[] courses;
        courses = tempCourses; 
    }

    courses[currentCourses] = new Course(name,id); 
    currentCourses++;
}
