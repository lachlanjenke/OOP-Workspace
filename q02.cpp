#include <iostream>
using namespace std;

int main() { 
    int *h = new int(2);
    int x = 0;
    cout << h << endl; 
    cout << &h << endl;
    cout << &x << endl;

    delete h;

    return 0;
}