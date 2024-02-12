//
// Created by aidan on 2/8/2024.
//

#include "Tree.h"

#include <queue>
#include <algorithm>

using namespace std;

Tree::Tree(Table table) {
    _root = nullptr;

    auto compare = [](const Node* a, const Node* b) {
        if (a->GetFrequency() == b->GetFrequency()) {
            return a->GetLetter() > b->GetLetter();
        }
        return a->GetFrequency() > b->GetFrequency();
    };

    vector<Node*> nodes;

    for (auto &element : *table.GetElements()) {
        string letter(1, element.GetLetter());
        Node *neoNode = new Node(letter, element.GetFrequency());
        nodes.push_back(neoNode);
    }

    while (nodes.size() > 1) {
        // Sort the vector based on the compare function
        sort(nodes.begin(), nodes.end(), compare);

        // Take the first two nodes
        Node* a = nodes.back(); nodes.pop_back();
        Node* b = nodes.back(); nodes.pop_back();

        // Create a new node combining the frequencies and letters of a and b
        Node* neoNode = new Node(a->GetLetter() + b->GetLetter(), a->GetFrequency() + b->GetFrequency(), a, b);

        // Push the new node back into the vector
        nodes.push_back(neoNode);
    }

    // Set the root of the tree
    if (!nodes.empty()) {
        _root = nodes[0];
    }
}

Tree::~Tree() {

}

Tree::Node::Node(string letter, size_t frequency, Node* left, Node* right): _letter(letter), _frequency(frequency), _left(left), _right(right){}

size_t Tree::Node::GetFrequency() const {
    return _frequency;
}

string Tree::Node::GetLetter() const {
    return _letter;
}


