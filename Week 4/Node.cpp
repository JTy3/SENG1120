// Node.cpp
// Author: Jacob Tye (Git: JTy3)
// Date: 31-8-2020
// Description: Node.cpp instantiate some shit
// Sidenote: Assignment 1 lol

#include "Node.h"
#include <iostream>

Node::Node(int initialData, Node* nextNode, Node* prevNode) {
    data = initialData;
    next = nextNode;
    prev = prevNode;
};