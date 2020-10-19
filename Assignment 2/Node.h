// Node.h
// Author: Jacob Tye (Git: JTy3)
// Date: 19-10-2020
// Description: Assignment 2 - Node Header File

#ifndef ASSIGNMENT_NODE
#define ASSIGNMENT_NODE

#include <iostream>
#include "Card.h"

using namespace std;

template <typename value_type>
class Node
{
public:
    // -------------------------------------------------------------------
    // <-- PUBLIC MEMBERS DEFINITION -->
    // -------------------------------------------------------------------

    // Constructor Declaration
    Node(const value_type &value);

    // Destructor Declaration
    ~Node();

    // Mutator function declarations

    // Precondition: Node is instantiated
    // Postcondition: Sets next node in list
    void setNext(Node *nextNode);

    // Precondition: Node is instantiated
    // Postcondition: Sets previous node in list
    void setPrev(Node *prevNode);

    // Precondition: Node is instantiated with the same data type as the one being parsed as an argument
    // Postcondition: Sets data for this node
    void setData(const value_type &inputData);

    // Accessor function declaration

    // Precondition: Next node has been set
    // Postcondition: Returns nextNode pointer variable
    const Node *getNext() const;
    // Precondition: Next node has been set
    // Postcondition: Returns nextNode pointer variable
    Node *getNext();

    // Precondition: Previous node has been set
    // Postcondition: Returns nextNode pointer variable
    const Node *getPrevious() const;
    // Precondition: Previous node has been set
    // Postcondition: Returns nextNode pointer variable
    Node *getPrevious();

    // Precondition: Data has been set
    // Postcondition: Returns nextNode pointer variable
    value_type getData() const;

private:
    // -------------------------------------------------------------------
    // <-- PRIVATE MEMBERS DEFINITION -->
    // -------------------------------------------------------------------
    value_type data; // Just the string stored within the node
    Node<value_type> *next;      // Pointer to a Node object - which is next in the list
    Node<value_type> *prev;      // Pointer to a Node object - which is previous in the list
};

#include "Node.hpp"

#endif