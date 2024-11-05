#include <iostream>
using namespace std;

class A {
public:
    virtual void fun() { cout << "A::fun() called "; }
};

class B : public A {
public:
    void fun() { cout << "B::fun() called "; }
};

class C : public B {
public:
    void fun() { cout << "C::fun() called "; }
};

int main() {
    A* a = new C;
    a->fun();
    return 0;
}
