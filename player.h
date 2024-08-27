#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string.h> 

using namespace std;

class Player {
    private:
        string name; 
        int health, damage;
    public:

    Player(); // Default constructor 
 
    Player(string name, int health, int damage); // Function for creating character

    void attack(Player* opponent, int damage); // Function for attacking

    void takeDamage(int damage); // Function for taking damage

    string getName(); // Function for getting name

    int getHealth(); // Function for getting health

    int getDamage(); // Function for getting damage 

    void setName(string name); // Function for setting name

    void setHeatlh(int health); // Function for setting health

    void setDamage(int damage); // Function for setting damage
};

#endif