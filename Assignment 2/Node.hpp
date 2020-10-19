// Node.h
// Author: Jacob Tye (Git: JTy3)
// Date: 19-10-2020
// Description: Assignment 2 - Node Implementation File

#include"Node.h"

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHODS -->
// Initialise Node objects when given a string and when not
// -------------------------------------------------------------------

// Initialised with data
template <typename value_type>
Node<value_type>::Node (const value_type& initialData)  {
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

template <typename value_type>
Node<value_type>::~Node()
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
template <typename value_type>
value_type Node<value_type>::getData() const
{
    return data;
}

// getNext() Initialisers
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
template <typename value_type>
Node<value_type>* Node<value_type>::getNext ()
{
    return next;
}
// Const
template <typename value_type>
const Node<value_type>* Node<value_type>::getNext () const
{
    return next;
}

// getPrevious() Initialisers
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
template <typename value_type>
Node<value_type>* Node<value_type>::getPrevious ()
{
    return prev;
}
// Const
template <typename value_type>
const Node<value_type>* Node<value_type>::getPrevious () const
{
    return prev;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHODS -->
// Setter methods for prev, next and data
// -------------------------------------------------------------------

// Same as initialising with a value setData needs to reference the memory address of the argument for data persistence
template <typename value_type>
void Node<value_type>::setData ( const value_type& inputData )
{
    data = inputData;
}

// Setting the next node in the linked list
template <typename value_type>
void Node<value_type>::setNext ( Node<value_type>* inputNext )
{
    // Sets the 'next' Node pointer to the parsed argument
	next = inputNext;
}

// Setting the previous node in the linked list
template <typename value_type>
void Node<value_type>::setPrev ( Node<value_type>* inputNext )
{
    // Sets the 'prev' Node pointer to the parsed argument
	prev = inputNext;
}