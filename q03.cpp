#include <iostream>
using namespace std;

int main() {
    int x = 100; 
    int z = 200; 
    int y = 100;

    int *p = &x;
    int *q = &y;
    int *w = &z;

    cout << p-q << endl;

    return 0;

}