// Node.h
// Author: Jacob Tye (Git: JTy3)
// Date: 31-8-2020
// Description: Class representing a soubly linked node
// Sidenote: Assignment 1 lol

#ifndef EXAMPLE_NODE
#define EXAMPLE_NODE

#include <iostream>
#include <string>

class Node {
    public:
        Node();     // DEFAULT CONSTRUCTOR
        // SPECIFIED CONSTRUCTOR
        Node(const int data, Node* nextNode = NULL, Node* prevNode = NULL);
        ~Node();    // DESTRUCTOR

        //Mutators
        void setNext(const Node* n);
        void setPrev(const Node* p);
        void setData(const int data);

        //Accessors
        Node* getNext() const;
        Node* getPrev() const;
        int getData() const;
    private:
        Node* next;
        Node* prev;
        int data;
};

#endif