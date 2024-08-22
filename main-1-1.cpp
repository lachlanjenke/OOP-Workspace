#include <string.h>
#include <iostream>
#include "StockItem.h"

using namespace std;

int main() {
    StockItem Meat(2024,"Ham"); // Create items
    StockItem Cheese(2023,"Chedder"); 

    // Test function 
    cout << "The product with code number " << Meat.get_item_code() << " is " << Meat.get_description() << endl; 
    cout << "The product with code number " << Cheese.get_item_code() << " is " << Cheese.get_description() << endl; 


    return 0; 
}