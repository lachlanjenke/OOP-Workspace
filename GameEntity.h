#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

using namespace std;
class Explosion;

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
                    this->type = ExplosionType;
                    break;
                case 'M':
                    this->type = MineType;
                    break;
                case 'S':
                    this->type = ShipType;
                    break;
                default:
                    this->type = NoneType;
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

        void setPos(int x, int y) {
            get<0>(position) = x;
            get<1>(position) = y;
        }

        void setType(char type) {
            switch (type) {
                case 'E':
                    this->type = ExplosionType;
                    break;
                case 'M':
                    this->type = MineType;
                    break;
                case 'S':
                    this->type = ShipType;
                    break;
                default:
                    type = NoneType;
                    break;
            }
        }
};

#endif