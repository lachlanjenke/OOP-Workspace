#ifndef STOCKITEM_H
#define STOCKITEM_H

#include <string.h>
#include <iostream>

using namespace std;

class StockItem {
    private:
        string stock_description;
        int stock_codeNum; 

    public:
        StockItem(); // a default constructor 

        // a constructor that takes the item description and the item code number as inputs
        StockItem(int code_num, string description);  

        string get_description(); // returns the item description

        int get_item_code(); // returns the item code of the item

        ~StockItem(); //A default destructor
};

#endif