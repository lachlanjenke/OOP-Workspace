#include <iostream>
#include <string.h> 
#include "player.h"

using namespace std;

// Default constructor 
Player::Player() {
    name = "";
    health = 0; 
    damage = 0; 
}

// Function for creating character
Player::Player(string playerName, int playerHealth, int playerDamage) {
    name = playerName; 
    health = playerHealth; 
    damage = playerDamage; 
} 

// Function for attacking
void Player::attack(Player* opponent, int damage) {
    opponent->takeDamage(damage); 
} 

// Function for taking damage
void Player::takeDamage(int damage) {
    health -= damage; 
    cout << name << " takes " << damage << " damage. Remaining health: " << health << endl; 
}

// Function for getting name
string Player::getName() {
    return name; 
} 

// Function for getting health
int Player::getHealth() {
    return health; 
}

// Function for getting damage 
int Player::getDamage() {
    return damage; 
}

// Function for setting name
void Player::setName(string playerName) {
    name = playerName; 
} 

// Function for setting health
void Player::setHeatlh(int playerHeatlh ) {
    health = playerHeatlh; 
}

// Function for setting damage
void Player::setDamage(int playerDamage) {
    damage = playerDamage; 
}