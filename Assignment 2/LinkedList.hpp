// LinkedList.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Linked List Implementation File

#include "LinkedList.h"

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHOD -->
// -------------------------------------------------------------------

// Initialised with no data (we add data to Linked List with the add() mutator function)
template <class value_type>
LinkedList<value_type>::LinkedList()
{
    head = NULL;
    tail = NULL;
    current = NULL;
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of LinkedList object
// -------------------------------------------------------------------

template <class value_type>
LinkedList<value_type>::~LinkedList()
{
    // Similar to how my destructor is written for Node<value_type> I am just setting all pointers to NULL here so the destructor is holding a value
    head = NULL;
    tail = NULL;
    current = NULL;
}

// -------------------------------------------------------------------
// <-- ACCESSOR IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

// getHead() Implementations
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
template <class value_type>
Node<value_type> *LinkedList<value_type>::getHead()
{
    return head;
}
// Const
template <class value_type>
const Node<value_type> *LinkedList<value_type>::getHead() const
{
    return head;
}

// getTail() Implementations
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
template <class value_type>
Node<value_type> *LinkedList<value_type>::getTail()
{
    return tail;
}
// Const
template <class value_type>
const Node<value_type> *LinkedList<value_type>::getTail() const
{
    return tail;
}

// getCurrent() Implementations
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
template <class value_type>
Node<value_type> *LinkedList<value_type>::getCurrent()
{
    return current;
}
// Const
template <class value_type>
const Node<value_type> *LinkedList<value_type>::getCurrent() const
{
    return current;
}

template <class value_type>
int LinkedList<value_type>::getSize()
{
    return numberOfNodes;
}

template <class value_type>
void LinkedList<value_type>::showHand()
{
    // Reset current to head node for this counter
    setCurrent(head);

    // Continue this loop while the current node pointer does not equal the tail node pointer
    while (current != tail)
    {
        if (current == head)
        {
            cout << current->getData() << " ";
            setCurrent(current->getNext());
        }
        else
        {
            // Build the new message from the data withing each node - make sure to include spaces between words
            cout << current->getData() << " ";
            setCurrent(current->getNext());
        }
    }

    // Grab the data from tail node for our last word
    cout << tail->getData() << endl;
}

// -------------------------------------------------------------------
// <-- OPERATOR OVERLOAD METHODS -->
// -------------------------------------------------------------------

// Overloads += operator
template <class value_type>
LinkedList<value_type> &LinkedList<value_type>::operator+=(const LinkedList &ls)
{
    add(ls.getcard());
    return *this;
}

// Overloads the operator '<<'
template <class value_type>
std::ostream &operator<<(std::ostream &os, const LinkedList<value_type> &ls)
{
    os << ls.showHand();
    return os;
}

// -------------------------------------------------------------------
// <-- HELPER IMPLEMENTATION METHOD -->
// -------------------------------------------------------------------
template <class value_type>
int LinkedList<value_type>::countNodes()
{
    int i = 0;

    // Reset current to head node for this counter
    setCurrent(head);

    // Continue this loop while the current node pointer does not equal the tail node pointer
    while (current != tail)
    {
        i++;
    }

    if (tail != NULL)
    {
        i++;
    }

    return i;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

// setHead() Implementation
// Sets head variable to *headNode<value_type>
template <class value_type>
void LinkedList<value_type>::setHead(Node<value_type> *headNode)
{
    head = headNode;
    head->setPrevious(NULL);
}

// setTail() Implementation
// Sets tail variable to *tailNode<value_type>
template <class value_type>
void LinkedList<value_type>::setTail(Node<value_type> *tailNode)
{
    tail = tailNode;
}

// setCurrent() Implementation
// Sets current variable to *currentNode<value_type>
template <class value_type>
void LinkedList<value_type>::setCurrent(Node<value_type> *currentNode)
{
    current = currentNode;
}

// add() Implementation
// Adds a full card to the linked list by breaking the card down into individual cards and making them Node<value_type>s
template <class value_type>
void LinkedList<value_type>::addToTail(const value_type &card)
{
    // Check if the head is NULL
    if (numberOfNodes == 0)
    {
        // If there are no nodes in the LinkedList (i.e: start of list) make everything equal this new node.
        tail = new Node<value_type>(card);
        head = tail;
        current = head;
        numberOfNodes++;
    }
    else
    {
        // If there are nodes in the LinkedList (i.e: not the start of list) shuffle some stuff around
        Node<value_type> *newNode = new Node<value_type>(card); // temp var
        tail->setNext(newNode);                                 // tail's next = temp var
        newNode->setPrevious(tail);                             // temp var prev = old tail
        tail = newNode;                                         // tail = temp var
        numberOfNodes++;                                        // increment numberOfNodes
        newNode = NULL;                                         // stop those memory leaks
    }
}

// remove() Implementation
// Returns full concatenated card store in the linked list
template <class value_type>
value_type LinkedList<value_type>::removeFromHead()
{
    Node<value_type> *tempNode;
    value_type value;
    tempNode = head;
    head = tempNode->getNext();
    if (head != NULL)
    {
        value = tempNode->getData();
        head->setPrevious(NULL);
    }
    else
    {
        tail = NULL;
    }
    tempNode = NULL;
    numberOfNodes--;
    return value;
}