#include <iostream> 
using namespace std; 

struct IntArray {
    int* a = nullptr;   
    int size = 0;  
   
}; 

int main() { 
    IntArray i; 
    i.a = new int[5];
    i.size = 5; 
    
    IntArray j;
    j = i; 

    delete i.a;
    i.a = new int[4];
    i.size = 4; 
    cout << j.size << endl; 

    delete i.a;
    return 0;
}