//
// Created by aidan on 2/7/2024.
//

#ifndef HUFFMAN_TREE_TABLE_H
#define HUFFMAN_TREE_TABLE_H

#include "Letter.h"

#include <vector>
#include <fstream>

using namespace std;

class Table {
private:
    vector<Letter> _table;
public:
    explicit Table(ifstream &inFile);
    void insert(const Letter& letter);
    void Sort();
    void ToString(ostream &output) const;
    vector<Letter>* GetElements();
};


#endif //HUFFMAN_TREE_TABLE_H
