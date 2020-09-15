// Node.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Node Header File

#ifndef ASSIGNMENT_NODE
#define ASSIGNMENT_NODE

#include <iostream>

using namespace std; 

class Node {
    public:
        // TYPEDEF DECLARATION
        typedef std::string value_type;

        // CONSTRUCTOR DECLARATION
        Node(); 
        Node(const value_type& initialData);

        // DESTRUCTOR DECLARATION
        ~Node();

        // MUTATOR METHODS DECLARATION
        void setNext(Node* nextNode);
        void setPrevious(Node* previousNode);
        void setData(const value_type& inputData);

        // ACCESSOR METHODS DECLARATION
        // Decalaration of methods to get next node in linked list (both const and non-const)
        const Node* getNext() const;
        Node* getNext();
        // Decalaration of methods to get previous node in linked list (both const and non-const)
        const Node* getPrevious() const;
        Node* getPrevious();
        // Decalaration of methods to get data from current node in linked list
        value_type getData() const;

    private:
        // MEMBERS DECLARATION
        value_type data;    // Just the string stored within the node
        Node* next;     // Pointer to a Node object - which is next in the list
        Node* prev;     // Pointer to a Node object - which is previous in the list
};

#endif