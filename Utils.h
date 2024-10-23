#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <random>
#include <cmath>

using namespace std;

class Utils {
    public:
    static tuple<int,int> getRandomPos(int gridWidth, int gridHeight) {
        tuple<int, int> position(rand() % gridWidth, rand() % gridHeight);
        return position;
    }
    static double calculateDistance(tuple<int,int> pos1, tuple<int,int> pos2) {
        double distance = 0;
        double xCordSum = pow((get<0>(pos2)-get<0>(pos1)),2);
        double yCordSum = pow((get<1>(pos2)-get<1>(pos1)),2);
        distance = sqrt(xCordSum + yCordSum);
        return distance;
    }
};

#endif