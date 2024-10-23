#ifndef EFFECT_H
#define EFFECT_H

#include "GameEntity.h"
#include <iostream>

using namespace std;

class Effect {
    public:
    virtual void apply(GameEntity& entity) = 0;
    
};

#endif 