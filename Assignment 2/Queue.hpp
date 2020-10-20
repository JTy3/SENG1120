// Queue.hpp
// Author: Jacob Tye (Git: JTy3)
// Date: 19-10-2020
// Description: Assignment 2 - Queue Implementation File

#include "Queue.h"

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHOD -->
// -------------------------------------------------------------------

template <typename value_type>
Queue<value_type>::Queue()
{
    LinkedList<value_type> *data = new LinkedList<value_type>();
    numberOfNodes = data->getSize();
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of Queue object
// -------------------------------------------------------------------
template <typename value_type>
Queue<value_type>::~Queue()
{
    // Similar to how my destructor is written for Node I am just setting all pointers to NULL here so the destructor is holding a value
    numberOfNodes = 0;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of Queue object
// -------------------------------------------------------------------

template <typename value_type>
void Queue<value_type>::enqueue(const value_type &addCard)
{
    data.addToTail(addCard);
    numberOfNodes = data.getSize();
}

template <typename value_type>
Node<value_type> Queue<value_type>::dequeue()
{
    Node<value_type> removedCard = data.removeFromHead();
    numberOfNodes = data.getSize();
    return removedCard;
}

template <typename value_type>
Node<value_type>* Queue<value_type>::getFront()
{
    return data.getHead();
}

template <typename value_type>
int Queue<value_type>::getSize()
{
    return data->getSize();
}

template <typename value_type>
void Queue<value_type>::showQueue()
{
    data.showHand();
}