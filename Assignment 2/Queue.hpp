#include "Queue.h"

using namespace std;

template <class data_type>
Queue<data_type>::Queue()
{
	data = new LinkedList<Card>();
	count = 0;
}

template <class data_type>
Queue<data_type>::~Queue()
{
	delete data;
	count = 0;
}

template <class data_type>
void Queue<data_type>::enqueue(const data_type& card) 
{
	++count;
	data->add(card);
}

template <class data_type>
data_type Queue<data_type>::dequeue() 
{
	--count;
	return data->removeFromHead(); //might not woork as getTail might return node instead of data.value, Where as remove is looking for data value
}

template <class data_type>
data_type Queue<data_type>::front() 
{
	return data->getTail()->getData();
}

template <class data_type>
bool Queue<data_type>::is_empty() const
{
	if (count == 0) {return true;}
	else{return false;}
}

template <class data_type>
const int Queue<data_type>::size()
{
	return count;
}

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



