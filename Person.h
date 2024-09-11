#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
    private:
        string name;
    public:
        // Constructors / Destructors
        Person();
        Person(string name);
        virtual ~Person();

        // Functions
        void setName(string name); 
        string getName();
};

#endif