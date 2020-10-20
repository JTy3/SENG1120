//This defines a basic controls for a linked list
//Programmer: Joshua Elton
//Last Modified 16/09/2020
//This file should be used with LinkedList.cpp and Assignment 1 files

#include "LinkedList.h"

using namespace std;


template <class data_type>
//Constructor
LinkedList<data_type>::LinkedList()
{
	//Set all values to NULL upon creating a new list
	HEAD = NULL; //The node which is at the start of the Linked List
	TAIL = NULL; //The node which is at the End of the Linked List
	CURRENT = NULL; // The Node Which is used to point and move through other Nodes
}

template <class data_type>
LinkedList<data_type>::LinkedList(data_type& node)
{
	HEAD = NULL; //The node which is at the start of the Linked List
	TAIL = NULL; //The node which is at the End of the Linked List
	CURRENT = NULL; // The Node Which is used to point and move through other Nodes
	add(node);
}

//Deconstructor
template <class data_type>
LinkedList<data_type>::~LinkedList()
{
	HEAD = NULL;
	TAIL = NULL;
	CURRENT = NULL;
}

//Getters And Setters (Mutator/Acessor Methods)
template <class data_type>
Node<data_type>* LinkedList<data_type>::getHead()
{
	return HEAD;
}

template <class data_type>
Node<data_type>* LinkedList<data_type>::getTail()
{
	return TAIL;
}

template <class data_type>
Node<data_type>* LinkedList<data_type>::getCurrent()
{
	return CURRENT;
}
template <class data_type>
Node<data_type>* LinkedList<data_type>::getNext()
{
	return CURRENT->getNext();
}

template <class data_type>
data_type LinkedList<data_type>::getData() const //Using LinkedList::Value_type to reference the valuetype specified in Node
{
    return data;
}

template <class data_type>
void LinkedList<data_type>::setCurrent(Node<data_type>* newCurrent)
{
	CURRENT = newCurrent;
}

template <class data_type>
void LinkedList<data_type>::setHead(const data_type& data)
{
	setCurrent(new Node<data_type>(data));
	CURRENT->setNext(HEAD);
	HEAD->setPrev(CURRENT);
	HEAD = CURRENT;
	HEAD->setPrev(NULL); // Makes sure It is the previous node
}

template <class data_type>
void LinkedList<data_type>::setTail(Node<data_type>* newTail)
{
	TAIL = newTail;
	TAIL->setNext(NULL);
}

template <class data_type>
void LinkedList<data_type>::setData(data_type newData)
{
	data = newData;
}

template <class data_type>
int LinkedList<data_type>::getCount()
{
	int count = 0;
	setCurrent(HEAD);
	while (CURRENT != NULL)
	{
		count++;
		CURRENT = CURRENT->getNext();
	}
	numberOfNodes = count;
	return count;
}

template <class data_type>
int LinkedList<data_type>::getListValue()
{
	int count = 0;
	setCurrent(HEAD);
	while (CURRENT != NULL)
	{
		count += CURRENT->getData().getValue();
		CURRENT = CURRENT->getNext();
	}
	
	if (TAIL != NULL)
	{
		count += TAIL->getData().getValue();
	}

	return count;
}

template <class data_type>
void LinkedList<data_type>::moveToHead(Node<data_type>* newHead)
{
	HEAD = newHead;
}


//Main functions
//This is where the main functions of the program are

//Add Function
//Precondition = Takes input of unchangeable type (value_type). Value_type and Inputstring must be valid
//PostCondition = This function will convert Input string into words. Create a seiries of linked Nodes. Then input the words into the nodes.
template <class data_type>
void LinkedList<data_type>::add(const data_type &word)
{
	if (HEAD == NULL) // If a header has not been created, Create one
	{
		setCurrent(new Node<data_type>(word)); // SetCurrent selector to a new Node
		moveToHead(CURRENT); // Make that Current Node the head 
	}
	else 
	{
		setCurrent(TAIL);
		Node<data_type>* nodeTemp = new Node<data_type>(word); // Create a new Temp Node with the word data
		CURRENT->setNext(nodeTemp); // Get the previous Current node and set it to next the new Node
		nodeTemp->setPrev(CURRENT); // Set the previous to the old current Node
		setCurrent(nodeTemp); // Set the new Node as current
	} 


	setTail(CURRENT); // After the while loop, current will be the the last Node.
}


template <class data_type>
data_type LinkedList<data_type>::removeFromHead()
{
	Node<data_type>* tempNode;
    data_type value;
    tempNode = HEAD;
    HEAD = tempNode->getNext();
    if (HEAD != NULL)
    {
        value = tempNode->getData();
        HEAD->setPrev(NULL);
    }
    else
    {
        TAIL = NULL;
    }
    tempNode = NULL;
    numberOfNodes--;
    return value;
}

//Operator Overloading
//Precondition = Operator needs a valid linked list to output
//Postcondition = returns the Data from all the nodes, compiled with spaces.
template <class data_type>
std::ostream &operator<<(std::ostream &os, const LinkedList<data_type> &ls)
{
    os << ls.getData(); // os is an OSTREAM object and ls.getdata get this objects data.
    return os; // return the object
}

//Precondition = Inputs a valid linked list
//Postcondition = appends a linked list to this current linked list. This works by adding the data from foreign linked list to this current object
template <class data_type>
LinkedList<data_type> &LinkedList<data_type>::operator+=(const LinkedList<data_type> &ls)
{
    add(ls.getData()); // Add this to the current dataset
    return *this; // Return a pointer to this object
}
