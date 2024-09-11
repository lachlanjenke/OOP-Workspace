#ifndef GRADE_H
#define GRADE_H

#include <string>

using namespace std;

class Grade {
    private:
        string assignment;
        int value;
    public:
        // Constructors / Destructors
        Grade();
        Grade(string assignment, int value);
        ~Grade();

        // Functions
        string getAssignment();
        int getValue();

};

#endif