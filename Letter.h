//
// Created by aidan on 2/7/2024.
//

#ifndef HUFFMAN_TREE_LETTER_H
#define HUFFMAN_TREE_LETTER_H

#include <string>

using namespace std;

class Letter {
private:
    char _letter;
    size_t _frequency{};
    string _code{};
public:
    explicit Letter(char c);
    char GetLetter() const;
    size_t GetFrequency() const;
    void AddFrequency();
    string ToString() const;
};


#endif //HUFFMAN_TREE_LETTER_H
