#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string.h> 
#include "player.h"

using namespace std;

class Warrior : public Player {
    private:
        string weapon;
    public:

    Warrior(); // Defeault constructor 

    Warrior(string name, int health, int damage, string weapon); // Function for creating Warrior

    void swingWeapon(Player* opponent); // Function for attacking opponent
};

#endif