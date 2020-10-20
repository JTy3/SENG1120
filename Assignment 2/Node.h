//This defines a basic setup for a Nodes
//Programmer: Joshua Elton
//Last Modified 12/09/2020
//This file should be used with LinkedList.cpp and Assignment 1 files

//MACROGUARDS
#ifndef NEW_NODE
#define NEW_NODE
using namespace std;
#include <string> // Use string to define value_type

//Class template declaration
template <class data_type>
class Node
{
	public:
		
		Node(); // Default constructor without parameters
		Node(const data_type& newData); // Constructor with parameters

		~Node(); // De-constructor

		//getters and setters
		data_type getData () const;
		Node<data_type>* getNext ();
		Node<data_type>* getPrev ();
		void setData(const data_type& newData);
		void setNext (Node<data_type>* inputNext);
		void setPrev (Node<data_type>* inputPrev);

	//Private variables so they are unaccesable outside of the class
	private:
		data_type data;
		Node<data_type>* next;
		Node<data_type>* prev;
};

#include "Node.hpp" //Includes the class template
#endif //END OF MACROGUARD