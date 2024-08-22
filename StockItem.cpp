#include <string.h>
#include <iostream>
#include "StockItem.h"

using namespace std;

StockItem::StockItem() {
    stock_description = ""; 
    stock_codeNum = 0; 
}

StockItem::StockItem(int code_num,string description) {
    stock_description = description; 
    stock_codeNum = code_num;
}

string StockItem::get_description() {
    return stock_description;
}

int StockItem::get_item_code() {
    return stock_codeNum;
}

StockItem::~StockItem() {

}
