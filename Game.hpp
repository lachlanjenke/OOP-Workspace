#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include "Robot.hpp"
#include "Goal.hpp"
#include "Obstacle.hpp"

using namespace std;

enum GameState {
    WIN,
    LOSE,
    PLAYING
};

class Game {
    private:
        int width, height;
        vector<pair<int,int>>obstacleCords;
        GameState state;
        Robot *player;
        Goal *goal;
        Obstacle *obstacle;
    public:
        Game(int width, int height, std::vector<std::pair<int, int>> obstacleCoordinates) {
            this->width = height;
            this->height = width;
            player = new Robot(width,height);
            goal = new Goal(width,height);

            obstacle = new Obstacle(2,2,width,height);

            state = PLAYING;

        }

        bool displayState() {
            switch (state) {
                case WIN:
                    cout << "You win!" << endl;
                    break;
                case LOSE:
                    cout << "You lose :(" << endl;
                    break;
                case PLAYING:
                    cout << "Game on" << endl;
                    break;
                default:
                    break;
            }
        }

        void movePlayer(int dx, int dy) {
            player->move(dx,dy);
        }

        void printGrid() {
    
        }
}; 

#endif