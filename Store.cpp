#include <string.h>
#include <iostream>
#include "StockItem.h"
#include "Store.h"

using namespace std;

// default constructor
Store::Store() {
    store_capacity = 0;
    current_capacity = 0; 
} 

// constructor for a store that can have up to capacity number of items
Store::Store(int capacity) { 
   item_list = new StockItem[capacity];
   store_capacity = capacity; 
   current_capacity = 0; 
}

// returns the number items currently stocked
// note that if more than one of the same item is in stock they are *all* counted
// i.e. if 3 widgets and 2 hammers are in stock then it will return 5.
int Store::get_Total_Stock_Count() {
    return current_capacity;
}

// returns the total count of items in stock with the given item code
// i.e. if there are 3 widgets (with the given item_code in stock then it will return 3.
int Store::get_Stock_Count(int item_code) {
    int stock_counter = 0; 

    for (int i = 0; i < current_capacity; i++) {
        if (item_list[i].get_item_code() == item_code) {
            stock_counter++; 
        }
    }

    return stock_counter;
}

// returns the array of all items in stock. 
// i.e. if there are 3 widgets and 2 hammers then the returned array will have 5 items.
StockItem* Store::get_Stock_List() {
    return item_list; 
}

// returns true and adds new_stock to the store if the store has enough capacity
// otherwise returns false
bool Store::add_Stock(StockItem new_stock) {
    if (current_capacity == store_capacity) {
        return false; 
    } else {
        item_list[current_capacity] = new_stock;
        current_capacity++; 
        return true; 
    }
 
}

Store::~Store() {
    
}