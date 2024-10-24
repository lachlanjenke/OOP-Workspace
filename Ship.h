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
            setPos(dx,dy);
        }
};

#endif