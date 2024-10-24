#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"
#include "Effect.h"
#include <tuple>

class Explosion : public GameEntity, public Effect {
    public:
        Explosion(int x, int y) {
            tuple<int,int>position(x,y);
            setPos(x,y);
            setType('E');
        }
        void apply(GameEntity& entity) override {
            entity.setPos(-1,-1);
            entity.setType('N');
        }
};

#endif