#include <iostream>
using namespace std;

int main() {
    int a[] = {1,2,3};

    int b[3];

    //b = a;

    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;

}