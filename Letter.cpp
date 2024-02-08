//
// Created by aidan on 2/7/2024.
//

#include "Letter.h"

#include <string>

using namespace std;

Letter::Letter(char c): _letter(c), _frequency(1){}

void Letter::AddFrequency() {
    ++_frequency;
}

char Letter::GetLetter() const{
    return _letter;
}

size_t Letter::GetFrequency() const {
    return _frequency;
}

string Letter::ToString() const{
    if(_letter == '\r'){
        return "{element:  CR, frequency: " + to_string(_frequency) + "}\n";
    }
    else{
        return "{element:  " + string(1, GetLetter()) + ", frequency: " + to_string(GetFrequency()) + "}\n";
    }
}