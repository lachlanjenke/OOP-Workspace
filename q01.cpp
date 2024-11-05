#include <iostream>
using namespace std;

void addOnetoX(int *p) {
    *p = *p + 1;
}

int main() { 
    int x = 100;
    addOnetoX(&x);
    cout << x << endl;
    return 0;
}