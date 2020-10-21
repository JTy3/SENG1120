// LinkedList.hpp
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - LinkedList class template implementation File

// Add libs / namespace
#include "LinkedList.h"

using namespace std;

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHODS -->
// Initialise Node objects when given a string and when not
// -------------------------------------------------------------------

template <class data_type>
LinkedList<data_type>::LinkedList()
{
	// Create an empty linked list
	head = NULL;
	tail = NULL;
	current = NULL;
}

template <class data_type>
LinkedList<data_type>::LinkedList(data_type &node)
{
	// Create an empty linked list and then immediately add the parsed var to tail
	// This is to simulate a queue
	// Data will enter from the back - and will leave from the front
	head = NULL;
	tail = NULL;	
	current = NULL; 
	addToTail(node);
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of Node object
// -------------------------------------------------------------------

template <class data_type>
LinkedList<data_type>::~LinkedList()
{
	// NULL out the linked list so it no longer exists
	head = NULL;
	tail = NULL;
	current = NULL;
}

// -------------------------------------------------------------------
// <-- ACCESSOR IMPLEMENTATION METHODS -->
// Getter methods for prev, next and data
// -------------------------------------------------------------------

template <class data_type>
Node<data_type> *LinkedList<data_type>::getHead()
{
	return head;
}

template <class data_type>
Node<data_type> *LinkedList<data_type>::getTail()
{
	return tail;
}

template <class data_type>
Node<data_type> *LinkedList<data_type>::getCurrent()
{
	return current;
}
template <class data_type>
Node<data_type> *LinkedList<data_type>::getNext()
{
	return current->getNext();
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

// Setter methods
template <class data_type>
void LinkedList<data_type>::setCurrent(Node<data_type> *newCurrent)
{
	current = newCurrent;
}

template <class data_type>
void LinkedList<data_type>::setHead(const data_type &data)
{
	setCurrent(new Node<data_type>(data));
	current->setNext(head);
	head->setPrev(current);
	head = current;
	head->setPrev(NULL);
}

template <class data_type>
void LinkedList<data_type>::setTail(Node<data_type> *newTail)
{
	tail = newTail;
	tail->setNext(NULL);
}

// Get number of nodes from linked list
template <class data_type>
int LinkedList<data_type>::getCount()
{
	int count = 0;
	setCurrent(head);
	while (current != NULL)
	{
		count++;
		current = current->getNext();
	}
	numberOfNodes = count;
	return count;
}

// Get the total value of the linked list
template <class data_type>
int LinkedList<data_type>::getListValue()
{
	int count = 0;
	setCurrent(head);
	while (current->getNext() != NULL)
	{
		count += current->getData().getValue();
		current = current->getNext();
	}

	if (tail != NULL)
	{
		count += tail->getData().getValue();
	}

	return count;
}

// Add a node to the tail of linked list
template <class data_type>
void LinkedList<data_type>::addToTail(const data_type &card)
{
	if (head == NULL) 
	{
		setCurrent(new Node<data_type>(card));
		head = current;			   
	}
	else
	{
		setCurrent(tail);
		Node<data_type> *nodeTemp = new Node<data_type>(card); 
		current->setNext(nodeTemp);						
		nodeTemp->setPrev(current);						
		setCurrent(nodeTemp);								
	}

	setTail(current); 
}

// Remove a node from the head of the linked list and return it's contents to the caller
template <class data_type>
data_type LinkedList<data_type>::removeFromHead()
{
	Node<data_type> *tempNode;
	data_type value;
	tempNode = head;
	head = tempNode->getNext();
	if (head != NULL)
	{
		value = tempNode->getData();
		head->setPrev(NULL);
	}
	else
	{
		value = tempNode->getData();
		tail = NULL;
	}
	tempNode = NULL;
	numberOfNodes--;
	return value;
}