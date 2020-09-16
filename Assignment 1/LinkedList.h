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

    // -------------------------------------------------------------------
    // <-- CONSTRUCTOR DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition:
    // Postcondition: LinkedList is created and implemented in LinkedList.cpp.
    LinkedList();

    // -------------------------------------------------------------------
    // <-- DESTRUCTOR DEFINITION -->
    // -------------------------------------------------------------------

    // Precondition: LinkedList instance is deleted
    // Postcondition: Handles memory allocations
    ~LinkedList();

    // -------------------------------------------------------------------
    // <-- MUTATOR METHODS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition: There are nodes within the linked list
    // Postcondition: message is set to a concatenation of all nodes in the list.
    void updateMessage();

    // Precondition: There are nodes within the linked list
    // Postcondition: updates head node member
    void setHead(Node *nextNode);

    // Precondition: There are nodes within the linked list
    // Postcondition: updates tail node member.
    void setTail(Node *previousNode);

    // Precondition: There are nodes within the linked list
    // Postcondition: updates current node member.
    void setCurrent(Node *currentNode);

    // Precondition:
    // Postcondition: adds nodes to linked list
    void add(const value_type &inputData);

    // Precondition: There are nodes within the linked list
    // Postcondition: removes nodes from linked list
    void remove(const value_type &inputData);

    // Precondition: There are nodes within the linked list
    // Postcondition: sorts nodes in linked lists alphabetically.
    void sort();

    // -------------------------------------------------------------------
    // <-- QUERY METHODS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition: there are nodes in the linked list
    // Postcondition: counts nodes of inputData value in linked list
    int count(const value_type &inputData);

    // -------------------------------------------------------------------
    // <-- HELPER METHODS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition: There are nodes within the linked list
    // Postcondition: counts nodes in linked list
    int countNodes(const value_type &inputData);

    // -------------------------------------------------------------------
    // <-- ACCESSOR METHODS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition: head node is set a value
    // Postcondition: returns memory address of head node
    const Node *getHead() const;
    Node *getHead();

    // Precondition: tail node is set a value
    // Postcondition: returns memory address of tail node
    const Node *getTail() const;
    Node *getTail();

    // Precondition: current node is set a value
    // Postcondition: returns memory address of head
    const Node *getCurrent() const;
    Node *getCurrent();

    // Precondition: message member is set a value
    // Postcondition: returns set message
    value_type getMessage() const;

    // -------------------------------------------------------------------
    // <-- OPERATOR OVERLOADING DEFINITION -->
    // -------------------------------------------------------------------

    // Precondition: ls is another LinkedList and has a message
    // Postcondition: concatenates two linked lists
    LinkedList &operator+=(const LinkedList &ls);

private:
    // -------------------------------------------------------------------
    // <-- PRIVATE MEMBERS DEFINITIONS-->
    // -------------------------------------------------------------------
    Node *head;         // Pointer to a Node object - the head node of the linked list
    Node *tail;         // Pointer to a Node object - the tail node of the linked list
    Node *current;      // Pointer to a Node object - current node of the linked list
    value_type message; // message made by nodes in linked list
    int numberOfNodes;  // number of nodes within the linked list
};

// -------------------------------------------------------------------
// <-- OPERATOR OVERLOADING DEFINITION -->
// -------------------------------------------------------------------

// Precondition: LinkedList is instantiated
// Postcondition: returns message that is made by linked list
std::ostream &operator<<(std::ostream &os, const LinkedList &ls);

#endif