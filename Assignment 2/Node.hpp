// Node.hpp
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - Node class template implementation File

// Add libs / namespace
#include "Node.h"
using namespace std;

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHODS -->
// Initialise Node objects when given a string and when not
// -------------------------------------------------------------------

template <class data_type>
Node<data_type>::Node ( const data_type& initialData ) 
{

	data = initialData;

	next=NULL;
	prev=NULL;
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of Node object
// -------------------------------------------------------------------

template <class data_type>
Node<data_type>::~Node() 
{
	next = NULL;
	prev = NULL;
	data = NULL;
}

// -------------------------------------------------------------------
// <-- ACCESSOR IMPLEMENTATION METHODS -->
// Getter methods for prev, next and data
// -------------------------------------------------------------------

template <class data_type>
data_type& Node<data_type>::getData ( )
{
	return data;
}

template <class data_type>
Node<data_type>* Node<data_type>::getNext() 
{
	return next;
}

template <class data_type>
Node<data_type>* Node<data_type>::getPrev()
{
	return prev;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHODS -->
// Setter methods for prev, next and data
// -------------------------------------------------------------------

template <class data_type>
void Node<data_type>::setData(const data_type& newData)
{
	data = newData;
}

template <class data_type>
void Node<data_type>::setNext (Node<data_type>* inputNext)
{
	next = inputNext;
}

template <class data_type>
void Node<data_type>::setPrev (Node<data_type>* inputPrev)
{
	prev = inputPrev;
}

