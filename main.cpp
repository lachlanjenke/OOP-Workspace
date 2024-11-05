#include <iostream>
#include <string>

using namespace std; 

class A {
    public:
    A() { cout << "It is in A";}
};

class B: public A {
    public:
    B() { cout << "It is in B";}
};

int main() {
    A *a = new B;
}