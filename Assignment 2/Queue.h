// Queue.h
// Author: Jacob Tye (Git: JTy3)
// Date: 19-10-2020
// Description: Assignment 2 - Queue Header File

#ifndef ASSIGNMENT_QUEUE
#define ASSIGNMENT_QUEUE

#include <iostream>
#include "LinkedList.h"

using namespace std;

template <typename value_type>
class Queue
{
public:
    // -------------------------------------------------------------------
    // <-- PUBLIC MEMBERS DEFINITION -->
    // -------------------------------------------------------------------

    // Constructor Declaration
    Queue();

    // Destructor Declaration
    ~Queue();

    // Mutator function declarations

    // Precondition: Queue is instantiated
    // Postcondition: Enqueues Card in queue
    void enqueue(const value_type &addCard);

    // Precondition: Queue is instantiated
    // Postcondition: Dequeues Card in queue
    Node<value_type> dequeue();

    // Accessor function declaration

    // Precondition: Next Queue has been set
    // Postcondition: Returns nextQueue pointer variable
    Node<value_type>* getFront();

    // Precondition: Data has been set
    // Postcondition: Returns nextQueue pointer variable
    int getSize();

    void showQueue();

private:
    // -------------------------------------------------------------------
    // <-- PRIVATE MEMBERS DEFINITION -->
    // -------------------------------------------------------------------
    LinkedList<value_type> data;
    int numberOfNodes; 
};

#include "Queue.hpp"

#endif