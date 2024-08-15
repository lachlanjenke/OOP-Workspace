#include <string>  // Library
using namespace std; 

#ifndef Person_H // Header guard
#define Person_H

struct Person {
    string name; 
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;

};

#endif