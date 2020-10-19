// LinkedList.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Linked List Implementation File

#include "LinkedList.h"

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHOD -->
// -------------------------------------------------------------------

// Initialised with no data (we add data to Linked List with the add() mutator function)
template <typename value_type>
LinkedList<value_type>::LinkedList()
{
    head = NULL;
    tail = NULL;
    current = NULL;
    numberOfNodes = 1;
}

template <typename value_type>
LinkedList<value_type>::LinkedList(value_type &data)
{
    head = new Node<value_type>(data);
    tail = head;
    current = tail;
    numberOfNodes = 1;
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of LinkedList object
// -------------------------------------------------------------------
template <typename value_type>
LinkedList<value_type>::~LinkedList()
{
    // Similar to how my destructor is written for Node I am just setting all pointers to NULL here so the destructor is holding a value
    head = NULL;
    tail = NULL;
    current = NULL;
    numberOfNodes = 0;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of LinkedList object
// -------------------------------------------------------------------

template <typename value_type>
void LinkedList<value_type>::addToTail(const value_type &data)
{
    if (numberOfNodes == 0)
    {
        tail = new Node<value_type>(data);
        head = tail;
        current = head;
        numberOfNodes = 1;
    }
    else
    {
        Node<value_type> *tailInsert = new Node<value_type>(data);
        tail->setNext(tailInsert);
        tailInsert->setPrev(tail);
        tail = tailInsert;
        numberOfNodes++;
        tailInsert = NULL;
    }
}

template <typename value_type>
value_type LinkedList<value_type>::removeFromHead()
{
    Node<value_type> *temp; // Assign the value of head to a temporary variable
    value_type value;
    temp = head;
    head = temp->getNext(); // Set the new head Node<value_type> as the next Node<value_type> of old head Node<value_type>
    if (head != NULL)
    {
        value = temp->getData();
        head->setPrevious(NULL);
    }
    else
    {
        tail = NULL;
    }
    delete temp; // Delete old head Node<value_type>
    numberOfNodes--;    // Length minus 1
    return value;
}

template <typename value_type>
void LinkedList<value_type>::currentToHead(Node<value_type> *currentNode)
{
    head = currentNode;
}

// -------------------------------------------------------------------
// <-- ACCESSOR IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

// getCurrent() Implementations
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Const
template <typename value_type>
const Node<value_type> *LinkedList<value_type>::getCurrent() const
{
    return current;
}

// Non-const
template <typename value_type>
Node<value_type> *LinkedList<value_type>::getCurrent()
{
    return current;
}

// getHead() Implementations
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Const
template <typename value_type>
const Node<value_type> LinkedList<value_type>::getHead() const
{
    return head;
}

// Non-const
template <typename value_type>
Node<value_type> LinkedList<value_type>::getHead()
{
    return head;
}

// geSize() Implementations
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
template <typename value_type>
int LinkedList<value_type>::getSize()
{
    return numberOfNodes;
}

// -------------------------------------------------------------------
// <-- QUERY IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

// Function to count the nodes withing a linked list
template <typename value_type>
int LinkedList<value_type>::countNodes()
{
    // Declaring and instantiating our counter
    int i = 0;

    // Reset current to head for this counter
    setCurrent(head);

    // Continue this loop while the current node pointer does not equal the tail node pointer
    while (current != tail)
    {
        i++;
        setCurrent(current->getNext());
    }

    i++;

    return i;
}