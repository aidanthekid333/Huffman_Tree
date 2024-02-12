//
// Created by aidan on 2/8/2024.
//

#include "Tree.h"

#include <queue>

using namespace std;

Tree::Tree(Table table) {

    auto compare = [](const Node* a, const Node* b) {
        return a->GetFrequency() > b->GetFrequency();
    };

    priority_queue<Node*, vector<Node*>, decltype(compare)> pq(compare);

}

Tree::~Tree() {

}

size_t Tree::Node::GetFrequency() const {
    return _frequency;
}
