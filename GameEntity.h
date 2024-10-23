#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

using namespace std;

enum GameEntityType {
    ExplosionType,
    MineType,
    NoneType,
    ShipType
};

class GameEntity {
    private:
        tuple<int,int> position;
        GameEntityType type;
    public:
        GameEntity(int x, int y, char type) {
            get<0>(position) = x;
            get<1>(position) = y;

            switch (type) {
                case 'E':
                    type = ExplosionType;
                    break;
                case 'M':
                    type = MineType;
                    break;
                case 'S':
                    type = ShipType;
                    break;
                default:
                    type = NoneType;
                    break;
            }
        }

        GameEntity() : GameEntity(0,0,' ') {};

        tuple<int,int> getPos() {
            return position;
        }

        GameEntityType getType() {
            return type;
        }
};

#endif