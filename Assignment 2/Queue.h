// Queue.h
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - Queue Header File

// Add macroguard / libs / namespace
#ifndef ASSIGNMENT_QUEUE
#define ASSIGNMENT_QUEUE

#include <iostream>
#include <fstream>
#include "Card.h"
#include "LinkedList.h"

using namespace std;

//Class template declaration
template <class data_type>
class Queue
{
public:
	// -------------------------------------------------------------------
	// <-- CONSTRUCTORS DEFINITIONS -->
	// -------------------------------------------------------------------
	Queue();

	/// -------------------------------------------------------------------
	// <-- DESTRUCTOR DEFINITION -->
	// -------------------------------------------------------------------
	~Queue();

	// -------------------------------------------------------------------
	// <-- MUTATOR METHODS DEFINITION -->
	// -------------------------------------------------------------------
	void enqueue(const data_type &card);
	data_type dequeue();

	// -------------------------------------------------------------------
	// <-- ACCESSOR METHODS DEFINITION -->
	// -------------------------------------------------------------------
	const int size();
	Node<data_type>* front();

private:
	// -------------------------------------------------------------------
	// <-- PRIVATE MEMBERS DEFINITION -->
	// -------------------------------------------------------------------
	LinkedList<data_type> *data;
	int count;
};

#include "Queue.hpp"
#endif