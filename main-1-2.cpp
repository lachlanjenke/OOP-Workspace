#include <string.h>
#include <iostream>
#include "StockItem.h"
#include "Store.h"

using namespace std;

int main() {
    int capacity = 5;
    Store tech_store(capacity); // Create store

    // Create items
    StockItem item1(2024,"Phone");
    StockItem item2(2023,"Computer");
    StockItem item3(2023,"Computer"); 
    StockItem item4(2024,"Phone"); 
    StockItem item5(2024,"Phone"); 
    StockItem item6(2025,"Tv"); 

    // Add Items
    if (tech_store.add_Stock(item1)) {
        cout << "Item 1 was added." << endl;
    } else {
        cout << "Item 1 was not added" << endl; 
    }
    if (tech_store.add_Stock(item2)) {
        cout << "Item 2 was added." << endl;
    } else {
        cout << "Item 2 was not added" << endl; 
    }
    if (tech_store.add_Stock(item3)) {
        cout << "Item 3 was added." << endl;
    } else {
        cout << "Item 3 was not added" << endl; 
    }
    if (tech_store.add_Stock(item4)) {
        cout << "Item 4 was added." << endl;
    } else {
        cout << "Item 4 was not added" << endl; 
    }
    if (tech_store.add_Stock(item5)) {
        cout << "Item 5 was added." << endl;
    } else {
        cout << "Item 5 was not added" << endl; 
    }
    if (tech_store.add_Stock(item6)) {
        cout << "Item 6 was added." << endl;
    } else {
        cout << "Item 6 was not added" << endl; 
    }
   
   // Check current stock count
   cout << "Current stock count is " << tech_store.get_Total_Stock_Count() << endl; 

   // Check total count of items
   cout << "The total number of Phones is " << tech_store.get_Stock_Count(2024) << endl;
   cout << "The total number of Computers is " << tech_store.get_Stock_Count(2023) << endl; 
   cout << "The total number of Tv's is " << tech_store.get_Stock_Count(2025) << endl; 

   // View item list
   tech_store.get_Stock_List();

}