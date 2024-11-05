#include <iostream>
using namespace std;

void b(int *p) {
    *p = *p + 1;
    int x = 10;

}

int a (int *p) {
    *p = *p + 1;
    int x = 100;
    b(&x);
}

int main() {
    int x = 0; 
    a(&x);
    cout << x << endl;
    return 0;
}