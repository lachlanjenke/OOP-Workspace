#include <iostream>
using namespace std;

class A {
public:
    void foo() { cout << "This is A\n"; }
};

class B : public A {
public:
    void foo() { cout << "This is B\n"; }
};

class C : public B {
public:
    void foo() { cout << "This is C\n"; }
};

void test(A* a) {
    a->foo();
}

int main() {
    C c;
    test(&c);
    return 0;
}
