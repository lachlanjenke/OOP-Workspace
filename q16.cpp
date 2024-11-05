#include <iostream>
using namespace std;

class A{    
    public:
        A() { cout << " It is in A\n";}
};

class B : public A {
    public:
        B() { cout << " It is in B\n";}
};

int main() {
    A *a = new B;

    return 0;
}