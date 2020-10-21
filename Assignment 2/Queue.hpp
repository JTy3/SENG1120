// Queue.hpp
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - Queue class template implementation File

// Add libs / namespace
#include "Queue.h"

using namespace std;


// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHODS -->
// Initialise Node objects when given a string and when not
// -------------------------------------------------------------------

template <class data_type>
Queue<data_type>::Queue()
{
	data = new LinkedList<Card>();
	count = 0;
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHODS -->
// Initialise Node objects when given a string and when not
// -------------------------------------------------------------------

template <class data_type>
Queue<data_type>::~Queue()
{
	delete data;
	count = 0;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

template <class data_type>
void Queue<data_type>::enqueue(const data_type& card) 
{
	++count;
	data->addToTail(card);
}

template <class data_type>
data_type Queue<data_type>::dequeue() 
{
	--count;
	return data->removeFromHead(); 
}

// -------------------------------------------------------------------
// <-- ACCESSOR IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

// Returns the data from the front of the queue
template <class data_type>
data_type Queue<data_type>::front() 
{
	return data->getHead()->getData();
}

// Checks if queue is empty
template <class data_type>
bool Queue<data_type>::is_empty() const
{
	if (count == 0) {return true;}
	else{return false;}
}

// Returns the size of the queue
template <class data_type>
const int Queue<data_type>::size()
{
	return count;
}

// Lists out the value of the queue
template <class data_type>
int Queue<data_type>::queueValue()
{
	return data->getListValue();
}

template <class data_type>
string Queue<data_type>::countDeck()
{
	data->setCurrent(data->getHead());
	while(data->getCurrent()->getNext() != NULL)
	{
		cout << data->getCurrent()->getData();
		data->setCurrent(data->getCurrent()->getNext());
	}
	cout << data->getTail()->getData();
	string end = "";
	return end;
}



