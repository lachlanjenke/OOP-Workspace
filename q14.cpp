#include <iostream>
using namespace std;

class A{
    protected: 
        int _a;
    public:
        A(int a) : _a(a) {}
        A() : A(100) {}
        int get_a() const { return _a;}
};

class B : public A {
    private:
        double _r;
    public:
        B() : _r(1) {}
        double foo() { return _a*_r;}
};

int main() {
    B b;
    cout << b.foo();

    return 0;
}