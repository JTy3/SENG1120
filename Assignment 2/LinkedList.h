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

template <typename value_type>
class LinkedList
{
public:
    // -------------------------------------------------------------------
    // <-- CONSTRUCTOR DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition:
    // Postcondition: LinkedList is created and implemented in LinkedList.cpp.
    LinkedList();

    // Precondition:
    // Postcondition: With a value.
    LinkedList(value_type& data);

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
    // Postcondition: Moves current node to the head
    void currentToHead(Node<value_type> *current);

    // Precondition: There are nodes within the linked list
    // Postcondition: Adds a node to the tail of the linked list
    void addToTail(const value_type& data);

    // Precondition: There are nodes within the linked list
    // Postcondition: Removes a node from the head
    value_type removeFromHead();

    // -------------------------------------------------------------------
    // <-- HELPER METHODS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition: There are nodes within the linked list
    // Postcondition: counts nodes in linked list
    int countNodes();

    // -------------------------------------------------------------------
    // <-- ACCESSOR METHODS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition: current node is set a value
    // Postcondition: returns memory address of current
    const Node<value_type> *getCurrent() const;
    Node<value_type> *getCurrent();

    // Precondition: current node is set a value
    // Postcondition: returns memory address of head
    const Node<value_type> *getHead() const;
    Node<value_type> *getHead();

    // Precondition: current node is set a value
    // Postcondition: returns memory address of head
    const Node<value_type> *getSize() const;
    Node<value_type> *getSize();

private:
    // -------------------------------------------------------------------
    // <-- PRIVATE MEMBERS DEFINITIONS-->
    // -------------------------------------------------------------------
    Node<value_type> *head;        // Pointer to a Node object - the head node of the linked list
    Node<value_type> *tail;        // Pointer to a Node object - the tail node of the linked list
    Node<value_type> *current;     // Pointer to a Node object - current node of the linked list
    int numberOfNodes; // number of nodes within the linked list
};

#include "LinkedList.hpp"

#endif