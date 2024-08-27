#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include <string.h> 
#include "player.h"

using namespace std;

class Wizard : public Player {
    private:
        int mana; 
    public:
    Wizard(); // Defeault constructor 

    Wizard(string name, int health, int damage, int mana); // Function for creating Warrior

    void castSpell(Player* opponent);  // Function for casting spell against opponent

    
};

#endif