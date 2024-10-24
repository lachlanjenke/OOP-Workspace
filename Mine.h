#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"
#include "Utils.h"

class Mine : public GameEntity {
    public:
        Mine(int x, int y) {
            setPos(x,y);
            setType('M');
        }

    Explosion explode() {
        tuple<int,int> position = getPos();
        Explosion mine(get<0>(position),get<1>(position));
        return mine;
    }
        
};

#endif 