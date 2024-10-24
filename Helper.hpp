#ifndef HELPER_H
#define HELPER_H

#include <tuple>
#include <cmath>

using namespace std;

class Helper {
    public:
        static double euclideanDistance(pair<int, int> item1, pair<int, int> item2) {
            double xResult = pow(get<0>(item2) - get<0>(item1),2);
            double yResult = pow(get<1>(item2) - get<1>(item1),2);
            double euclideanDistance = sqrt(xResult + yResult); 
            return euclideanDistance;
        }

};

#endif