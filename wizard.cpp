#include <iostream>
#include <string.h> 
#include "player.h"
#include "wizard.h"

using namespace std;

// Defeault constructor 
Wizard::Wizard() {
    setName(""); 
    setHeatlh(0); 
    setDamage(0);
    mana = 0; 
} 

// Function for creating Warrior
Wizard::Wizard(string name, int health, int damage, int playerMana) {
    setName(name); 
    setHeatlh(health); 
    setDamage(damage);
    mana = playerMana; 
}
// Function for casting spell against opponent
void Wizard::castSpell(Player* opponent) {
    attack(opponent,getDamage()); 
    cout << getName() << " casts a spell on " << opponent->getName() << " for " << getDamage() << " damage.\n";
}