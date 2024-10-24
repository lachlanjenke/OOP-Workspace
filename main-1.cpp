#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include <random>
#include <vector>
#include <tuple>
#include <ctime>

int main() {
    srand(time(0));
    tuple<int,int> randomPosition = Utils::getRandomPos(20,20);
    GameEntity entity1(get<0>(randomPosition),get<1>(randomPosition),'S');
    randomPosition = Utils::getRandomPos(20,20);
    GameEntity entity2(get<0>(randomPosition),get<1>(randomPosition),'M');

    cout << "The distance between the two entities is: " 
         << Utils::calculateDistance(entity1.getPos(),entity2.getPos())
         << endl;

    return 0;
}