// LinkedList.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Linked List Implementation File

#include "LinkedList.h"

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHOD -->
// -------------------------------------------------------------------

// Initialised with no data (we add data to Linked List with the add() mutator function)
LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
    current = NULL;
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of LinkedList object
// -------------------------------------------------------------------

LinkedList::~LinkedList()
{
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
Node *LinkedList::getHead()
{
    return head;
}
// Const
const Node *LinkedList::getHead() const
{
    return head;
}

// getTail() Initialisers
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
Node *LinkedList::getTail()
{
    return tail;
}
// Const
const Node *LinkedList::getTail() const
{
    return tail;
}

// getCurrent() Initialisers
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
Node *LinkedList::getCurrent()
{
    return current;
}
// Const
const Node *LinkedList::getCurrent() const
{
    return current;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

void LinkedList::setHead(Node *headNode)
{
    head = headNode;
}

void LinkedList::setTail(Node *tailNode)
{
    tail = tailNode;
}

void LinkedList::setCurrent(Node *currentNode)
{
    current = currentNode;
}

void LinkedList::add(const value_type &message)
{
    // Using stringstream to separate the words in the message added
    stringstream messageReceived(message);

    // Declaring a variable for each word with value_type so it can be easily used to create a new node
    value_type word;

    // While looping through the message received
    while (messageReceived >> word)
    {

        // Printing message (temporary debugging)
        cout << word + " ";

        // Check if the head is NULL
        if (head == NULL)
        {
            // If head is NULL set current to the new node with the current word
            setCurrent(new Node(word));
            // And set head to current
            setHead(current);
        }
        else
        {
            // If head is NOT NULL set the next node (for the current node) to the new node with the current word
            current->setNext(new Node(word));
            // AND ONLY THEN do you set the NEW current Node to the next node in the previous current node
            setCurrent(current->getNext());
        }
        // In this instance, the tail will always be the current word because the loop will finish on the final word (i.e: final node)
        setTail(current);
    }

    // Some debug statements to make sure the linked list is roughly working
    cout << endl
         << "Head: " << endl;
    cout << head->getData() << endl;
    cout << "Tail: " << endl;
    cout << tail->getData() << endl;
}

void LinkedList::remove(const value_type &word)
{
}

int LinkedList::count(const value_type &word)
{
    // Declaring and instantiating our counter
    int i = 0;

    // Reset current to head for this counter
    setCurrent(head);

    // Continue this loop while the current node pointer does not equal the tail node pointer - doWhile needs to be used instead
    while (current != tail)
    {
        // Check if the current node's word equals the word we are counting
        if (current->getData() == word)
        {
            // If it does add to the counter and reset current to the next word for next iteration
            i++;
        }
        // If current node's word does not match the word being searched just set the current node to the next in the linked
        setCurrent(current->getNext());
    }

    // Finally because we don't include tail in the while loop as it is the indicator of the end of the loop, we need to make sure the word in tail node is not the one we are searching for
    if (tail->getData() == word)
    {   
        // If the tail node's word matches the word we are counting. Add an extra number to the counter.
        i++;
    }

    return i;
}

void LinkedList::sort()
{
    
}