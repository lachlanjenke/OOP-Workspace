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
            
        }
};

#endif