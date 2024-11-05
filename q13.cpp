#include <iostream>
using namespace std;

class B {
    private:
        int _id;
    public: 
        B(int id) : _id(id) { }
        B() : B(0.5) { cout << "+B";}
        int get_id() { return _id;}
        void set_id(int id) { _id = id;}
        ~B() { cout << "-B";}
};

class A{
    private:
        B *b;
    public:
    A() 
    {   
        b = new B[2];
        cout << "+A";
    }
    ~A() 
    {
        delete[] b;
        cout << "-A";
    } 
};

int main() {
    A a;
    return 0;
}