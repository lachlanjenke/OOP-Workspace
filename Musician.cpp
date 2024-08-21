#include "Musician.h"
#include "Orchestra.h"

using namespace std;

Musician::Musician() {
    instrument = "Null"; 
    experience = 0; 
}

Musician::Musician(string input_instrument, int input_experience) {
    instrument = input_instrument; 
    experience = input_experience; 
}

string Musician::get_instrument() {
    return instrument; 
}

int Musician::get_experience() {
    return experience;     
}
