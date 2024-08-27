#include <iostream>
#include <string.h> 
#include "player.h"
#include "warrior.h"

using namespace std;

// Defeault constructor 
Warrior::Warrior() {
    setName(""); 
    setHeatlh(0); 
    setDamage(0);
    weapon = "";
    
}

// Function for creating Warrior
Warrior::Warrior(string name, int health, int damage, string playerWeapon) {
    setName(name); 
    setHeatlh(health); 
    setDamage(damage);
    weapon = playerWeapon; 
} 

// Function for attacking opponent
void Warrior::swingWeapon(Player* opponent) {
   attack(opponent,getDamage());
   cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}