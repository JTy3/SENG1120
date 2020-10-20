//This defines a basic controls for a Nodes
//Programmer: Joshua Elton
//Last Modified 12/09/2020
//This file should be used with LinkedList.cpp and Assignment 1 files

//Include the .h file
#include "Node.h"
using namespace std;

template <class data_type>
Node<data_type>::Node ( const data_type& initialData ) // Default constructor
{

	data = initialData;

	next=NULL;
	prev=NULL;
}
template <class data_type>
Node<data_type>::~Node() // Deconstructor
{
	
}

template <class data_type>
data_type Node<data_type>::getData ( ) const // getter / accesor
{
	return data;
}

template <class data_type>
Node<data_type>* Node<data_type>::getNext() // getter / accesor
{
	return next;
}

template <class data_type>
Node<data_type>* Node<data_type>::getPrev() // getter / accesor
{
	return prev;
}

template <class data_type>
void Node<data_type>::setData(const data_type& newData) // setter / mutator
{
	data = newData;
}

template <class data_type>
void Node<data_type>::setNext (Node<data_type>* inputNext) // setter / mutator
{
	next = inputNext;
}

template <class data_type>
void Node<data_type>::setPrev (Node<data_type>* inputPrev) // setter / mutator
{
	prev = inputPrev;
}

