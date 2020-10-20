//This defines a basic structure for a linked list
//Programmer: Joshua Elton
//Last Modified 12/09/2020
//This file should be used with LinkedList.cpp and Assignment 1 files

//MACROGUARDS
#ifndef NEW_LINKED_LIST
#define NEW_LINKED_LIST

//Needed Libraries
#include <iostream>
#include <sstream>
#include "Node.h"

//Use this namespace
using namespace std;

//Class template declaration
template <class data_type>
class LinkedList
{
public:
	LinkedList(); // Constructor
	LinkedList(data_type &node);

	~LinkedList(); // Deconstructor

	//Custom Functions
	void add(const data_type &data);
	void remove(const data_type &word);
	void concatenateMessage();
	int count(const data_type &word);

	//Accesors
	void setCurrent(Node<data_type> *newCurrent);
	void setHead(const data_type &data);
	void setTail(Node<data_type> *newTail);
	void setData(data_type newData);
	void moveToHead(Node<data_type> *newHead);

	//Mutators
	data_type getData() const;
	Node<data_type> *getHead();
	Node<data_type> *getTail();
	Node<data_type> *getNext();
	Node<data_type> *getCurrent();
	data_type removeFromHead();
	int getCount();

	//Operator overiding
	LinkedList &operator+=(const LinkedList &ls);

	//Private variables unaccesible from other classes
private:
	data_type data;
	Node<data_type> *node;
	Node<data_type> *CURRENT;
	Node<data_type> *HEAD;
	Node<data_type> *TAIL;
	int numberOfNodes;
};

//Has to be declared outside of class due to its Library
template <class data_type>
std::ostream &operator<<(std::ostream &os, const LinkedList<data_type> &ll);

#include "LinkedList.hpp"
#endif