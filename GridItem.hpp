#ifndef GRIDITEM_H
#define GRIDITEM_H

#include <tuple>

using namespace std;

class GridItem {
    private:
        pair<int,int> coordinates;
        int width, height;
        
    public:
        static int gridItemCount;
        GridItem(int x, int y, int width, int height) {
            get<0>(coordinates) = x;
            get<1>(coordinates) = y;
            this->width = width;
            this->height = height;
            gridItemCount++;
        }

        GridItem() : GridItem(0,0,0,0) {
        }

        void setCoordinates(int x, int y) {
            get<0>(coordinates) = x;
            get<1>(coordinates) = y;
        }

        pair<int, int> getCoordinates() {
            return coordinates;
        }

        int getGridWidth() {
            return width;
        }

        int getGridHeight() {
            return height;
        }

        int getActiveGridItemCount() {
            return gridItemCount; 
        }

        virtual ~GridItem() {
            gridItemCount--;
        }



};

int GridItem::gridItemCount = 0;

#endif