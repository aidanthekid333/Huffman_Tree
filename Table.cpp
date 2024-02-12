//
// Created by aidan on 2/7/2024.
//

#include "Table.h"

#include <string>
#include <algorithm>

using namespace std;

Table::Table(ifstream &inFile) {
    char c;
    while(inFile.get(c)){
        bool found = false;
        for(Letter &letter : _table){
            if(letter.GetLetter() == c){
                letter.AddFrequency();
                found = true;
                break;
            }
        }
        if(!found){
            insert(Letter(c));
        }
    }
    sort(_table.begin(), _table.end(), [](Letter &a, Letter &b){
        return a.GetFrequency() > b.GetFrequency();
    });
}

void Table::insert(const Letter &letter) {
    _table.push_back(letter);
}

void Table::ToString(ostream &output) const {
    for(const Letter &letter: _table){
        output << letter.ToString();
    }
}

vector<Letter> *Table::GetElements() {
    return &_table;
}
