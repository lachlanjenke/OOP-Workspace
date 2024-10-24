#ifndef INTERACTABLE_H
#define INTERACTABLE_H

#include "GridItem.hpp"
#include "Robot.hpp"

enum InteractableType {
    GOAL,
    OBSTACLE
};

class Interactable : public GridItem {
    private: 
        static int interactableCount;
    public: 
        Interactable(int x, int y, int width, int height) : GridItem(x,y,width,height) {
            interactableCount++;
        }

        Interactable() : GridItem(0,0,0,0) {}

        virtual bool interact(Robot *player) = 0;

        virtual InteractableType getType() = 0;

        int getActiveInteractableCount() {
            return interactableCount;
        }

        ~Interactable() {
            interactableCount--;
        }

};

#endif