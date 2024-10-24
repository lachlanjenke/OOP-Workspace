#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Interactable.hpp"
#include "Helper.hpp"

class Obstacle : public Interactable {
    public:
         Obstacle(int x, int y, int width, int height) : Interactable(x,y,width,height) {}

         bool interact(Robot *player) {
            double distance = Helper::euclideanDistance(player->getCoordinates(),getCoordinates());
            if (distance == 0) {
                player->takeHit();
                if (distance == 0 & player->getHealth() == 0) {
                    return true;
                } else {
                    return false;
                }
            } else {
                return false;
            }

            return false;
         }

        InteractableType getType() {
            return OBSTACLE;
        }
};

#endif