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

class LinkedList
{
public:
    // TYPEDEF DECLARATION
    typedef Node::value_type value_type;

    // CONSTRUCTOR DECLARATION
    // Precondition:
    // Postcondition: LinkedList is created and implemented in LinkedList.cpp.
    LinkedList();

    // DESTRUCTOR DECLARATION
    // Precondition: LinkedList instance is deleted
    // Postcondition: Handles memory allocations
    ~LinkedList();

    // MUTATOR METHODS DECLARATION
    // Precondition: There are nodes within the linked list
    // Postcondition: message is set to a concatenation of all nodes in the list.
    void updateMessage();
    // Precondition:
    // Postcondition: message is set to &message value.
    void setHead(Node *nextNode);
    // Precondition:
    // Postcondition: message is set to &message value.
    void setTail(Node *previousNode);
    // Precondition: 
    // Postcondition: message is set to &message value.
    void setCurrent(Node *currentNode);
    // Precondition: 
    // Postcondition: message is set to &message value.
    void add(const value_type &inputData);
    // Precondition:
    // Postcondition: message is set to &message value.
    void remove(const value_type &inputData);
    // Precondition: 
    // Postcondition: message is set to &message value.
    int count(const value_type &inputData);
    // Precondition: 
    // Postcondition: message is set to &message value.
    void sort();

    // ACCESSOR METHODS DECLARATION
    // Precondition: Point p has x and y values
    // Postcondition: returns ostream of Point p defined as (x,y).
    const Node *getHead() const;
    Node *getHead();
    // Precondition: Point p has x and y values
    // Postcondition: returns ostream of Point p defined as (x,y).
    const Node *getTail() const;
    Node *getTail();
    // Precondition: Point p has x and y values
    // Postcondition: returns ostream of Point p defined as (x,y).
    const Node *getCurrent() const;
    Node *getCurrent();
    // Precondition: Point p has x and y values
    // Postcondition: returns ostream of Point p defined as (x,y).
    value_type getMessage() const;

    // OPERATOR OVERLOADER DECLARATION
    // Precondition: this Point and p have x and y values
    // Postcondition: adds the x and y values of p to this Point's x and y values
    LinkedList &operator+=(const LinkedList &ls);

private:
    // MEMBERS DECLARATION
    Node *head;    // Pointer to a Node object - the head node of the linked list
    Node *tail;    // Pointer to a Node object - the tail node of the linked list
    Node *current; // Pointer to a Node object - current node of the linked list
    value_type message;
};

// OPERATOR OVERLOADER DECLARATION
// Precondition: Point p has x and y values
// Postcondition: returns ostream of Point p defined as (x,y).
std::ostream &operator<<(std::ostream &os, const LinkedList &ls);

#endif