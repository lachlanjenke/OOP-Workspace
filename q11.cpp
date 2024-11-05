#include <iostream>
using namespace std;

class A{
    private:
        int _x;
    public:
        A(int x) : _x(x) { }
        int get_x() { return _x;}
};

int main() {
    A a(10);
    cout << a.get_x() << endl;

    return 0;
}
