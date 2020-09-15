// LinkedList.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Linked List Header File

#ifndef ASSIGNMENT_LINKED_LIST
#define ASSIGNMENT_LINKED_LIST

#include <iostream>
#include <sstream>
#include "Node.h"

using namespace std; 

class LinkedList {
    public:
        // TYPEDEF DECLARATION
        typedef Node::value_type value_type;

        // CONSTRUCTOR DECLARATION
        LinkedList();

        // DESTRUCTOR DECLARATION
        ~LinkedList();

        // MUTATOR METHODS DECLARATION
        // Set the head node in the linked list
        void setHead(Node* nextNode);
        // Set the tail node in the linked list
        void setTail(Node* previousNode);
        // Set the current node in the linked list
        void setCurrent(Node* currentNode);
        // Add a node to the linked list - parsing as a reference allocation for data persistence
        void add(const value_type& inputData);
        // Remove all nodes that contain a certain input in the linked list - parsing as a reference allocation for data persistence
        void remove(const value_type& inputData);
        // Count all occurences of a word in the linked list - parsing as a reference allocation for data persistence
        void count(const value_type& inputData);
        // Sort the list into alphabetical order
        void sort();

        // ACCESSOR METHODS DECLARATION
        // Methods to get the head node in linked list (both const and non-const)
        const Node* getHead() const;
        Node* getHead();
        // Methods to get the tail node in linked list (both const and non-const)
        const Node* getTail() const;
        Node* getTail();
        // Methods to get the current node in linked list (both const and non-const)t
        const Node* getCurrent() const;
        Node* getCurrent();
    private:
        // MEMBERS DECLARATION
        Node* head;     // Pointer to a Node object - the head node of the linked list
        Node* tail;     // Pointer to a Node object - the tail node of the linked list
        Node* current;      // Pointer to a Node object - current node of the linked list
};

#endif