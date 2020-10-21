// Node.h
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - Node Header File

// Add macroguard / libs / namespace
#ifndef NEW_NODE
#define NEW_NODE

#include <string>
using namespace std;

//Class template declaration
template <class data_type>
class Node
{
public:
	// -------------------------------------------------------------------
	// <-- CONSTRUCTORS DEFINITIONS -->
	// -------------------------------------------------------------------

	// Precondition:
	// Postcondition: Node is created and implemented in Node.hpp.
	Node();

	// Precondition:
	// Postcondition: Node is created and implemented in Node.hpp.
	Node(const data_type &newData);

	/// -------------------------------------------------------------------
	// <-- DESTRUCTOR DEFINITION -->
	// -------------------------------------------------------------------

	// Precondition:
	// Postcondition: Node is destructed upon deletion
	~Node();

	// -------------------------------------------------------------------
	// <-- ACCESSOR METHODS DEFINITIONS -->
	// -------------------------------------------------------------------
	data_type &getData();
	Node<data_type> *getNext();
	Node<data_type> *getPrev();

	// -------------------------------------------------------------------
	// <-- MUTATOR METHODS DEFINITION -->
	// -------------------------------------------------------------------

	void setData(const data_type &newData);
	void setNext(Node<data_type> *inputNext);
	void setPrev(Node<data_type> *inputPrev);

private:
	// -------------------------------------------------------------------
	// <-- PRIVATE MEMBERS DEFINITION -->
	// -------------------------------------------------------------------
	data_type data;
	Node<data_type> *next;
	Node<data_type> *prev;
};

#include "Node.hpp" //Includes the implementation file

#endif	