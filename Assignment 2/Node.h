// Node.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Node Header File

#ifndef ASSIGNMENT_NODE
#define ASSIGNMENT_NODE

#include <iostream>

using namespace std;

class Node
{
public:
    // -------------------------------------------------------------------
    // <-- TYPEDEF DEFINITION -->
    // -------------------------------------------------------------------
    typedef std::string value_type;

    // -------------------------------------------------------------------
    // <-- CONSTRUCTORS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition:
    // Postcondition: Node is created and implemented in Node.cpp.
    Node();

    // Precondition:
    // Postcondition: Node is created and implemented in Node.cpp.
    Node(const value_type &initialData);

    /// -------------------------------------------------------------------
    // <-- DESTRUCTOR DEFINITION -->
    // -------------------------------------------------------------------

    // Precondition:
    // Postcondition: Node is destructed upon deletion
    ~Node();

    // -------------------------------------------------------------------
    // <-- MUTATOR METHODS DEFINITION -->
    // -------------------------------------------------------------------

    // Precondition: Node has been instantiated
    // Postcondition: Next node is set as a pointer to another node
    void setNext(Node *nextNode);

    // Precondition: Node has been instantiated
    // Postcondition: previous node is set as a pointer to another node
    void setPrevious(Node *previousNode);

    // Precondition: Node has been instantiated
    // Postcondition: Data contained in node is set as a value_type variable
    void setData(const value_type &inputData);

    // -------------------------------------------------------------------
    // <-- ACCESSOR METHODS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Decalaration of methods to get next node in linked list (both const and non-const)

    // Precondition: Next node has been set
    // Postcondition: Returns nextNode pointer variable
    const Node *getNext() const;

    // Precondition: Next node has been set
    // Postcondition: Returns nextNode pointer variable
    Node *getNext();

    // Decalaration of methods to get previous node in linked list (both const and non-const)

    // Precondition: Previous node has been set
    // Postcondition: Returns nextNode pointer variable
    const Node *getPrevious() const;

    // Precondition: Previous node has been set
    // Postcondition: Returns nextNode pointer variable
    Node *getPrevious();

    // Decalaration of methods to get data from current node in linked list

    // Precondition: Data has been set
    // Postcondition: Returns data type_def variable
    value_type getData() const;

private:
    // -------------------------------------------------------------------
    // <-- PRIVATE MEMBERS DEFINITION -->
    // -------------------------------------------------------------------

    value_type data; // Just the string stored within the node
    Node *next;      // Pointer to a Node object - which is next in the list
    Node *prev;      // Pointer to a Node object - which is previous in the list
};

#endif