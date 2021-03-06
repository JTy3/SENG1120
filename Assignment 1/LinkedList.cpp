// LinkedList.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Linked List Implementation File

#include "LinkedList.h"

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHOD -->
// -------------------------------------------------------------------

// Initialised with no data (we add data to Linked List with the add() mutator function)
LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
    current = NULL;
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of LinkedList object
// -------------------------------------------------------------------

LinkedList::~LinkedList()
{
    // Similar to how my destructor is written for Node I am just setting all pointers to NULL here so the destructor is holding a value
    head = NULL;
    tail = NULL;
    current = NULL;
}

// -------------------------------------------------------------------
// <-- ACCESSOR IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

// getMessage() Implementation
// Returns full concatenated message store in the linked list
LinkedList::value_type LinkedList::getMessage() const
{
    return message;
}

// getHead() Implementations
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
Node *LinkedList::getHead()
{
    return head;
}
// Const
const Node *LinkedList::getHead() const
{
    return head;
}

// getTail() Implementations
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
Node *LinkedList::getTail()
{
    return tail;
}
// Const
const Node *LinkedList::getTail() const
{
    return tail;
}

// getCurrent() Implementations
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
Node *LinkedList::getCurrent()
{
    return current;
}
// Const
const Node *LinkedList::getCurrent() const
{
    return current;
}

// -------------------------------------------------------------------
// <-- OPERATOR OVERLOAD METHODS -->
// -------------------------------------------------------------------

// Overloads += operator
LinkedList &LinkedList::operator+=(const LinkedList &ls)
{
    add(ls.getMessage());
    return *this;
}

// Overloads the operator '<<'
std::ostream &operator<<(std::ostream &os, const LinkedList &ls)
{
    os << ls.getMessage();
    return os;
}

// -------------------------------------------------------------------
// <-- HELPER IMPLEMENTATION METHOD -->
// -------------------------------------------------------------------

int LinkedList::countNodes(const value_type &inputData)
{

    stringstream stream(inputData); // Used for breaking words
    string word;                    // to store individual words

    int count = 0;
    while (stream >> word)
        count++;
    return count;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHODS -->
// -------------------------------------------------------------------

// setMessage() Implementation
// Sets message variable to &inputMessage
void LinkedList::updateMessage()
{
    // Set temp variable to store the contents of each node - set as an empty string to start with
    value_type newMessage = "";

    // Reset current to head node for this counter
    setCurrent(head);

    // Continue this loop while the current node pointer does not equal the tail node pointer
    while (current != tail)
    {
        if (current == head)
        {
            newMessage += current->getData();
            setCurrent(current->getNext());
        }
        else
        {
            // Build the new message from the data withing each node - make sure to include spaces between words
            newMessage += " " + current->getData();
            setCurrent(current->getNext());
        }
    }

    // Grab the data from tail node for our last word
    newMessage += " " + tail->getData();

    // Give linked list member message the value of newMessage - updating it
    message = newMessage;
    numberOfNodes = countNodes(message);
}

// setHead() Implementation
// Sets head variable to *headNode
void LinkedList::setHead(Node *headNode)
{
    head = headNode;
    head->setPrevious(NULL);
}

// setTail() Implementation
// Sets tail variable to *tailNode
void LinkedList::setTail(Node *tailNode)
{
    tail = tailNode;
}

// setCurrent() Implementation
// Sets current variable to *currentNode
void LinkedList::setCurrent(Node *currentNode)
{
    current = currentNode;
}

// add() Implementation
// Adds a full message to the linked list by breaking the message down into individual words and making them nodes
void LinkedList::add(const value_type &message)
{
    // Using stringstream to separate the words in the message added
    stringstream messageReceived(message);

    // Declaring a variable for each word with value_type so it can be easily used to create a new node
    value_type word;

    // While looping through the message received
    while (messageReceived >> word)
    {
        // Check if the head is NULL
        if (head == NULL)
        {
            // If head is NULL set current to the new node with the current word
            setCurrent(new Node(word));
            // And set head to current
            setHead(current);
        }
        else
        {
            // If head is NOT NULL set the next node (for the current node) to the new node with the current word
            Node *newNode = new Node(word); // Declare a temp variable newNode
            current->setNext(newNode);      // Set the current nextNode to the newNode
            newNode->setPrevious(current);  // Set the newNode prevNode to the currentNode
            setCurrent(newNode);            // Finally rewrite the current node as the newNode
        }
        // In this instance, the tail will always be the current word because the loop will finish on the final word (i.e: final node)
        setTail(current);
        tail->setNext(NULL);
    }

    // Whenever we make changes to the string, we will call update message to hold the new data within the private member 'message'
    updateMessage();
}

// remove() Implementation
// Returns full concatenated message store in the linked list
void LinkedList::remove(const value_type &word)
{
    // Reset current to head for this counter
    setCurrent(head);
    // Continue this loop while the current node pointer does not equal the tail node pointer
    while (current->getNext() != tail)
    {
        // Check if the current node's word equals the word we are deleting
        if (current->getNext()->getData() == word)
        {
            // Set the current node's next var to the node in front of the one we are about to delete
            current->setNext(current->getNext()->getNext());
            // Update current node to be our new next node
            setCurrent(current->getNext());
            // Delete the now previous node from the stack
            delete current->getPrevious();
            // If via deletion the tail is now the current, update the message and exit this function
            if (current == tail)
            {
                updateMessage();
                return;
            }
        }
        else
        {
            // If current node's word does not match the word being searched just set the current node to the next in the linked
            setCurrent(current->getNext());
        }
    }

    // If the tail data is equal to the word we are searching for set the tail to current (as it will be the node previous to tail), delete the next node (old tail) and null out the next node var
    if (tail->getData() == word)
    {
        setTail(current);
        delete current->getNext();
        tail->setNext(NULL);
    }

    updateMessage();
}

// sort() Implementation
// Sorts message into alphabetical order
void LinkedList::sort()
{
    value_type temp;

    for (int i = 0; i < numberOfNodes - 1; i++)
    {
        setCurrent(head);
        for (int i = 0; i < numberOfNodes - 1; i++)
        {
            while (current->getData() > current->getNext()->getData())
            {
                temp = current->getData();
                current->setData(current->getNext()->getData());
                current->getNext()->setData(temp);
            }
            setCurrent(current->getNext());
        }
    }

    updateMessage();
}

// -------------------------------------------------------------------
// <-- QUERY IMPLEMENTATION METHOD -->
// I called this a query method because it doesn't really mutate the data, nor does it access it. It kind of just counts it - or 'queries' it :)
// -------------------------------------------------------------------

// count() Implementation
// Counts occurences of a parsed word
int LinkedList::count(const value_type &word)
{
    // Declaring and instantiating our counter
    int i = 0;

    // Reset current to head for this counter
    setCurrent(head);

    // Continue this loop while the current node pointer does not equal the tail node pointer
    while (current != tail)
    {
        // Check if the current node's word equals the word we are counting
        if (current->getData() == word)
        {
            // If it does add to the counter and reset current to the next word for next iteration
            i++;
        }
        // If current node's word does not match the word being searched just set the current node to the next in the linked
        setCurrent(current->getNext());
    }

    // Finally because we don't include tail in the while loop as it is the indicator of the end of the loop, we need to make sure the word in tail node is not the one we are searching for
    if (tail->getData() == word)
    {
        // If the tail node's word matches the word we are counting. Add an extra number to the counter.
        i++;
    }

    return i;
}