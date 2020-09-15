// LinkedList.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Linked List Implementation File

#include "LinkedList.h"

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHOD -->
// -------------------------------------------------------------------

// Initialised with no data (we add data to Linked List with the add() mutator function)
LinkedList::LinkedList ()   {
    head = NULL;
    tail = NULL;
    current = NULL;
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of LinkedList object
// -------------------------------------------------------------------

LinkedList::~LinkedList ()   {
    // Similar to how my destructor is written for Node I am just setting all pointers to NULL here so the destructor is holding a value
    head = NULL;
    tail = NULL;
    current = NULL;
}

// -------------------------------------------------------------------
// <-- ACCESSOR IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

// getHead() Initialisers
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
Node* LinkedList::getHead ()
{
    return head;
}
// Const
const Node* LinkedList::getHead () const
{
    return head;
}

// getTail() Initialisers
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
Node* LinkedList::getTail ()
{
    return tail;
}
// Const
const Node* LinkedList::getTail () const
{
    return tail;
}

// getCurrent() Initialisers
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
Node* LinkedList::getCurrent ()
{
    return current;
}
// Const
const Node* LinkedList::getCurrent () const
{
    return current;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

void LinkedList::setHead(Node* headNode)    
{
    head = headNode;
}

void LinkedList::setTail(Node* tailNode)    
{
    tail = tailNode;
}

void LinkedList::setCurrent(Node* currentNode)    
{
    current = currentNode;
}

void LinkedList::add(const value_type& message) 
{
    stringstream s(message);
    value_type word;

    while (s >> word)
        current = new Node(word);
        if (head == NULL) {
            head == current;
        }
        tail == current;
}

void LinkedList::remove(const value_type& word)
{

}

void LinkedList::count(const value_type& word)
{

}

void LinkedList::sort()
{

}