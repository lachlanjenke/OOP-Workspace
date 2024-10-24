#ifndef ROBOT_H
#define ROBOT_H

#include "GridItem.hpp"

class Robot : GridItem {
    private:
        int health;
    public:
        Robot(int gridWitdh, int gridHeight) : GridItem(0,0,gridWitdh,gridHeight) {
            health = 3;
         }

        int getHealth() {
            return health;
        }

        void takeHit() {
            if (health != 0) {
                health--;
            }
        }

        bool move(int xOffSet, int yOffSet) {
            if (xOffSet && yOffSet != 0) {
                return false;
            } else {
                pair<int, int>(currentCords) = getCoordinates();
                int x = get<0>(currentCords);
                int y = get<1>(currentCords);

                if (x + xOffSet < getGridWidth() - 1 && y + yOffSet < getGridHeight()) {
                    x += xOffSet;
                    y += yOffSet;

                    setCoordinates(x,y);
                    return true;
                } else {
                    return false; 
                }
            }
            return false; 
        }

        pair<int, int> getCoordinates() {
            return getCoordinates();
        }
};

#endif