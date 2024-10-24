#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include <random>
#include <vector>
#include <tuple>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    // Create ship
    tuple<int,int> randomPosition = Utils::getRandomPos(20,20);
    Ship ship(get<0>(randomPosition),get<1>(randomPosition)); 

    // Create Mine
    randomPosition = Utils::getRandomPos(20,20);
    Mine mine(get<0>(randomPosition),get<1>(randomPosition)); 

    // Check Ship and mine
    tuple<int,int> shipPos = ship.getPos();
    int xShip = get<0>(shipPos), yShip = get<1>(shipPos);
    cout << "Ship type: " << ship.getType() << " position: " << xShip << "," << yShip << endl;

    tuple<int,int> minePos = mine.getPos();
    int xMine = get<0>(minePos), yMine = get<1>(minePos);
    cout << "Mine type: " << mine.getType() << " position: " << xMine << "," << yMine << endl;

    // Move Ship
    randomPosition = Utils::getRandomPos(20,20);
    ship.move(get<0>(randomPosition),get<1>(randomPosition));

    // Check ship has moved
    shipPos = ship.getPos();
    xShip = get<0>(shipPos);
    yShip = get<1>(shipPos);
    cout << "Ship type: " << ship.getType() << " position: " << xShip << "," << yShip << endl;


    // Explode mine
    Explosion boom = mine.explode();

    // Explode ship
    boom.apply(ship);

    // Check mine and ship have been set to none and position 
    shipPos = ship.getPos();
    xShip = get<0>(shipPos); 
    yShip = get<1>(shipPos);
    cout << "Ship type: " << ship.getType() << " position: " << xShip << "," << yShip << endl;

    minePos = mine.getPos();
    xMine = get<0>(minePos); 
    yMine = get<1>(minePos);
    cout << "Mine type: " << mine.getType() << " position: " << xMine << "," << yMine << endl;

}