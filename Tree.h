//
// Created by aidan on 2/8/2024.
//

#ifndef HUFFMAN_TREE_TREE_H
#define HUFFMAN_TREE_TREE_H

#include "Letter.h"
#include "Table.h"


class Tree {
private:
    struct Node{
        Node* _left;
        Node* _right;
        string _letter;
        size_t _frequency;
        Node(string letter, size_t frequency);

        size_t GetFrequency() const;

    };
    Node* _root;
public:
    Tree(Table table);
    ~Tree();
};


#endif //HUFFMAN_TREE_TREE_H
