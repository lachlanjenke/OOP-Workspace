#include "Orchestra.h"
#include "Musician.h"
#include <iostream>

using namespace std;

Orchestra::Orchestra() {
    maxSize = 0; 
    currentSize = 0; 
}

Orchestra::Orchestra(int size) {
    maxSize = size;
    musicianList = new Musician[maxSize];
    currentSize = 0;
}

int Orchestra::get_current_number_of_members() {
    return currentSize; 
} 

bool Orchestra::has_instrument(string instrument) {
    for (int i = 0; i < get_current_number_of_members(); i++) {       
        if (musicianList[i].get_instrument() == instrument) {
            return true; 
        }
    }
    return false; 
}

Musician* Orchestra::get_members() {
    return musicianList; 
}

bool Orchestra::add_musician(Musician new_musician) {
    if (get_current_number_of_members() == maxSize) {
        return false; 
    } else {
        musicianList[currentSize] = new_musician; 
        currentSize++; 
        return true;
    } 
    
}
