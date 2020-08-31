// linkedList.h
// Author: Jacob Tye (Git: JTy3)
// Date: 31-8-2020
// Description: Class representing a doubly linked list
// Sidenote: Assignment 1 lol

#ifndef EXAMPLE_LIST
#define EXAMPLE_LIST

#include <iostream>
#include <string>
#include "Node.h"

class LinkedList {
    public:
        LinkedList();     // DEFAULT CONSTRUCTOR
        // SPECIFIED CONSTRUCTOR
        LinkedList(Node* headNode = NULL, Node* tailNode = NULL, Node* currentNode = NULL);
        ~LinkedList();    // DESTRUCTOR

        //Mutators
        void setHead(const Node* n);
        void setTail(const Node* p);
        void setCurrent(const Node* current);
        void insert(const Node* newNode);

        //Accessors
        Node* getNext() const;
        Node* getPrev() const;
        Node* getCurrent() const;
    private:
        Node* head;
        Node* tail;
        Node* current;
};

#endif