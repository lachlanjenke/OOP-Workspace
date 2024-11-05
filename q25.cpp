#include <iostream>
#include <vector>
using namespace std;

template <class T>
struct Point{
    T _x = 10;
    T _y = 10;
};

typedef Point<int> Point_i;

int main() {
    vector<Point_i> v;
    v.resize(10);
    vector<Point_i>::iterator e;
    for (e = v.begin(); e < v.end(); e++) {
        cout << e->_x << endl;
    }

    return 0;
}