#include <iostream> 
using namespace std; 

struct Student {
    string name;
    int ID;
    double grade;
}; 

void print_student(Student a) {
    cout << a.name << "|" << a.ID << "|" << a.grade << endl; 
}

void print_student_ptr(Student *p) {
    cout << p->name << "|" << p->ID << "|" << p->grade << endl; 
}

int main() {

    Student s1; 
    Student *ps; 

    s1.name = "Feras";
    s1.ID = 65974; 
    s1.grade = 85.55;

    ps = &s1; 

    print_student_ptr(ps); 

    return 0; 
}
