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

template <class value_type>
class LinkedList
{
public:
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

    // Precondition: There are Node<value_type>s within the linked list
    // Postcondition: updates head Node<value_type> member
    void setHead(Node<value_type> *nextNode);

    // Precondition: There are Node<value_type>s within the linked list
    // Postcondition: updates tail Node<value_type> member.
    void setTail(Node<value_type> *previousNode);

    // Precondition: There are Node<value_type>s within the linked list
    // Postcondition: updates current Node<value_type> member.
    void setCurrent(Node<value_type> *currentNode);

    // Precondition:
    // Postcondition: adds Node<value_type>s to linked list
    void addToTail(const value_type &inputData);

    // Precondition: There are Node<value_type>s within the linked list
    // Postcondition: removes Node<value_type>s from linked list
    value_type removeFromHead();

    // -------------------------------------------------------------------
    // <-- HELPER METHODS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition: There are Node<value_type>s within the linked list
    // Postcondition: counts Node<value_type>s in linked list
    int countNodes();

    // -------------------------------------------------------------------
    // <-- ACCESSOR METHODS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition: head Node<value_type> is set a value
    // Postcondition: returns memory address of head Node<value_type>
    const Node<value_type> *getHead() const;
    Node<value_type> *getHead();

    // Precondition: tail Node<value_type> is set a value
    // Postcondition: returns memory address of tail Node<value_type>
    const Node<value_type> *getTail() const;
    Node<value_type> *getTail();

    // Precondition: current Node<value_type> is set a value
    // Postcondition: returns memory address of head
    const Node<value_type> *getCurrent() const;
    Node<value_type> *getCurrent();

    int getSize();

    // Precondition: message member is set a value
    // Postcondition: returns set message
    void showHand();

    // -------------------------------------------------------------------
    // <-- OPERATOR OVERLOADING DEFINITION -->
    // -------------------------------------------------------------------

    // Precondition: ls is another LinkedList and has a message
    // Postcondition: concatenates two linked lists
    LinkedList<value_type> &operator+=(const LinkedList<value_type> &ls);

private:
    // -------------------------------------------------------------------
    // <-- PRIVATE MEMBERS DEFINITIONS-->
    // -------------------------------------------------------------------
    Node<value_type> *head;         // Pointer to a Node<value_type> object - the head Node<value_type> of the linked list
    Node<value_type> *tail;         // Pointer to a Node<value_type> object - the tail Node<value_type> of the linked list
    Node<value_type> *current;      // Pointer to a Node<value_type> object - current Node<value_type> of the linked list
    int numberOfNodes;  // number of Node<value_type>s within the linked list
};

#include"LinkedList.hpp"

#endif