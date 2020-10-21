// LinkedList.h
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - Linked List Header File

// Add macroguard / libs / namespace
#ifndef NEW_LINKED_LIST
#define NEW_LINKED_LIST

#include <iostream>
#include <sstream>
#include "Node.h"

using namespace std;

//Class template declaration
template <class data_type>
class LinkedList
{
public:
	// -------------------------------------------------------------------
	// <-- CONSTRUCTORS DEFINITIONS -->
	// -------------------------------------------------------------------

	LinkedList();
	LinkedList(data_type &node);

	/// -------------------------------------------------------------------
	// <-- DESTRUCTOR DEFINITION -->
	// -------------------------------------------------------------------

	~LinkedList();

	// -------------------------------------------------------------------
	// <-- MUTATOR METHODS DEFINITION -->
	// -------------------------------------------------------------------

	void addToTail(const data_type &data);
	void setCurrent(Node<data_type> *newCurrent);
	void setHead(const data_type &data);
	void setTail(Node<data_type> *newTail);
	void setData(data_type &newData);
	void moveToHead(Node<data_type> *newHead);
	data_type removeFromHead();

	// -------------------------------------------------------------------
	// <-- ACCESSOR METHODS DEFINITIONS -->
	// -------------------------------------------------------------------

	data_type &getData() const;
	Node<data_type> *getHead();
	Node<data_type> *getTail();
	Node<data_type> *getNext();
	Node<data_type> *getCurrent();

	int getCount();
	int getListValue();

private:
	// -------------------------------------------------------------------
	// <-- PRIVATE MEMBERS DEFINITION -->
	// -------------------------------------------------------------------
	data_type data;
	Node<data_type> *node;
	Node<data_type> *CURRENT;
	Node<data_type> *HEAD;
	Node<data_type> *TAIL;
	int numberOfNodes;
};

// Cout operator overloading
template <class data_type>
std::ostream &operator<<(std::ostream &os, const LinkedList<data_type> &ll);

#include "LinkedList.hpp"
#endif