#include <iostream>

#include "Helper.hpp"
#include "GridItem.hpp"

using namespace std;


int main() {
    int width = 5, height = 5;
    GridItem item1(0,0,width,height); 
    GridItem item2(4,4,width,height);

    cout << "The distance between the two items is " 
         << Helper::euclideanDistance(item1.getCoordinates(),item2.getCoordinates())
         << endl;
}
