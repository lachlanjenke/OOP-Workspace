#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
    int *book_id = new int;
};

int main() {
    Book b1, b2;
    *b1.book_id = 100;
    b2 = b1;
    cout << *b2.book_id << endl;
    *b1.book_id = 500;
    cout << *b2.book_id << endl;

    return 0;
}