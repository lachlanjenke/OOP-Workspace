#ifndef GAME_H
#define GAME_H

#include <vector>
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"

using namespace std;

class Game {
    private:
        vector<GameEntity*>entities;
    public:
        vector<GameEntity*> get_entities() {
            return entities;
        }

        void set_entites(vector<GameEntity*>entities) {
            this->entities = entities; 
        }

        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
            tuple<int,int> randomPosition;
            for (int i = 0; i < numShips; i++) {
                randomPosition =  Utils::getRandomPos(gridWidth,gridHeight);
                entities.push_back(&Ship(get<0>(randomPosition),get<1>(randomPosition)));
            } 

            for (int i = 0; i < numMines; i++) {
                randomPosition =  Utils::getRandomPos(gridWidth,gridHeight);
                entities.push_back(&Mine(get<0>(randomPosition),get<1>(randomPosition)));
            } 

            return entities;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold) {
            int loopNumber = 0;
            while (loopNumber != maxIterations) {
                loopNumber++;
                for (int i = 0; i < entities.size(); i++) {
                    if (entities[i]->getType() == ShipType) {
                        Ship* ship = static_cast<Ship*>(entities[i]);
                        ship->move(1,0);
                    }
                }
            }
        }
};

#endif