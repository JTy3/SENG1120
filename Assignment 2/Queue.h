#ifndef NEW_QUEUE
#define NEW_QUEUE

#include <iostream>
#include <fstream>
#include "Card.h"
#include "LinkedList.h"

using namespace std;

template <class data_type>
class Queue 
{
	public:
		//Construct new Queue
		Queue();

		//Destruct Queue
		~Queue();

		void enqueue(const data_type& card);
		data_type dequeue(); 

		const int size();
		int queueValue();
		bool is_empty() const;
		data_type front();
		string countDeck();

	private:
		LinkedList<data_type>* data;
		int count;

};

#include "Queue.hpp"
#endif