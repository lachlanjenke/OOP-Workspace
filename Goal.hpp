#ifndef GOAL_H
#define GOAL_H

#include "GridItem.hpp"
#include "Robot.hpp"
#include "Interactable.hpp"
#include "Helper.hpp"
#include <tuple>

class Goal : public Interactable { 
    public:
        Goal(int width, int height) : Interactable(width-1,height-1,width,height) {}
        bool interact(Robot *player) override{
            
            if (Helper::euclideanDistance(player->getCoordinates(),getCoordinates()) == 0) {
                return true;
            } else {
                return false; 
            }
        }

        InteractableType getType() {
            return GOAL;
        }
};

#endif