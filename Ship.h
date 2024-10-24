#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity {
    public:
        Ship(int x, int y) {
            setPos(x,y);
            setType('S');
        }

        void move(int dx, int dy) {
            tuple<int,int>(position) = getPos();
            int xShip = get<0>(position);
            int yShip = get<1>(position);
            
            xShip += dx;
            yShip += dy;

            setPos(xShip,yShip);
        }
};

#endif