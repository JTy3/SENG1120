// Node.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Node Implementation File

#include "Node.h"

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHODS -->
// Initialise Node objects when given a string and when not
// -------------------------------------------------------------------

// Initialised with no data (empty node)
Node::Node ()   {
    // Set 'next' to NULL
    next = NULL;
    // Set 'prev' to NULL
    prev = NULL;
}

// Initialised with data
Node::Node (const value_type& initialData)  {
    // Set 'data' to the memory dress of the parsed string
    // Similar to function setData, this is so 'data' for this node remain persistent beyond it's call
    data = initialData;
    // Set 'next' pointer to NULL
    next = NULL;
    // Set 'prev' pointer to NULL
    prev = NULL;
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of Node object
// -------------------------------------------------------------------

Node::~Node()
{
	// Set next and prev pointers to NULL to display something being in the destructor
	next = NULL;
    prev = NULL;
}

// -------------------------------------------------------------------
// <-- ACCESSOR IMPLEMENTATION METHODS -->
// Getter methods for prev, next and data
// -------------------------------------------------------------------

// Get Data of current node
Node::value_type Node::getData () const
{
    return data;
}

// getNext() Initialisers
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
Node* Node::getNext ()
{
    return next;
}
// Const
const Node* Node::getNext () const
{
    return next;
}

// getPrevious() Initialisers
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
Node* Node::getPrevious ()
{
    return prev;
}
// Const
const Node* Node::getPrevious () const
{
    return prev;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHODS -->
// Setter methods for prev, next and data
// -------------------------------------------------------------------

// Same as initialising with a value setData needs to reference the memory address of the argument for data persistence
void Node::setData ( const value_type& inputData )
{
    data = inputData;
}

// Setting the next node in the linked list
void Node::setNext ( Node* inputNext )
{
    // Sets the 'next' Node pointer to the parsed argument
	next = inputNext;
}

// Setting the previous node in the linked list
void Node::setPrevious ( Node* inputNext )
{
    // Sets the 'prev' Node pointer to the parsed argument
	next = inputNext;
}