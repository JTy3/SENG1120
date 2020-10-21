// DeckOfCards.cpp
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - DeckOfCards Implementation File

#include "DeckOfCards.h"

using namespace std;

//Constructor Implementation
DeckOfCards::DeckOfCards()
{
	data = new Queue<Card>();
	string cardNumbers[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
	string cardSuites[4] = {"D", "H", "S", "C"};
	Card *tempCard = new Card();

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			tempCard->setFace(cardNumbers[j] + "-" + cardSuites[i]);
			if (cardNumbers[j] == "J" || cardNumbers[j] == "Q" || cardNumbers[j] == "K")
				tempCard->setValue(10);
			else if (cardNumbers[j] == "A")
				tempCard->setValue(11);
			else
				tempCard->setValue(atoi(cardNumbers[j].c_str()));
			tempCard->setFaceUp(false);
			data->enqueue(*tempCard);
		}
	}

	delete tempCard;
}

//Destructor Implementation
DeckOfCards::~DeckOfCards()
{
	data = NULL;
}

// Shuffle function to randomly shuffle the cards
void DeckOfCards::shuffle()
{
	Queue<Card> *shuffle_group_1 = new Queue<Card>();
	Queue<Card> *shuffle_group_2 = new Queue<Card>();
	Queue<Card> *shuffle_group_3 = new Queue<Card>();
	Queue<Card> *shuffle_group_4 = new Queue<Card>();

	int i = 0;

	while (i < 13)
	{
		shuffle_group_1->enqueue(data->dequeue());
		i++;
	}
	while (i < 26)
	{
		shuffle_group_2->enqueue(data->dequeue());
		i++;
	}
	while (i < 39)
	{
		shuffle_group_3->enqueue(data->dequeue());
		i++;
	}
	while (i < 52)
	{
		shuffle_group_4->enqueue(data->dequeue());
		i++;
	}

	int randomNum, randomNum2;

	/* I had to seed the rng otherwise I was getting the same numbers every time it compiled */
	srand(time(NULL));

	for (int j = 0; j < 1000; j++)
	{

		randomNum = rand() % 4 + 1;
		randomNum2 = rand() % 4 + 1;

		if ((randomNum == 1))
		{
			if(randomNum2 == 1)
			{
				shuffle_group_1->enqueue(shuffle_group_1->dequeue());
			}
			else if(randomNum2 == 2)
			{
				shuffle_group_2->enqueue(shuffle_group_1->dequeue());
				shuffle_group_1->enqueue(shuffle_group_2->dequeue());
			}
			else if(randomNum2 == 3)
			{
				shuffle_group_3->enqueue(shuffle_group_1->dequeue());
				shuffle_group_1->enqueue(shuffle_group_3->dequeue());
			}
			else
			{
				shuffle_group_4->enqueue(shuffle_group_1->dequeue());
				shuffle_group_1->enqueue(shuffle_group_4->dequeue());
			}
		}
		else if ((randomNum == 2))
		{
			if(randomNum2 == 1)
			{
				shuffle_group_2->enqueue(shuffle_group_2->dequeue());
			}
			else if(randomNum2 == 2)
			{
				shuffle_group_1->enqueue(shuffle_group_2->dequeue());
				shuffle_group_2->enqueue(shuffle_group_1->dequeue());
			}
			else if(randomNum2 == 3)
			{
				shuffle_group_3->enqueue(shuffle_group_2->dequeue());
				shuffle_group_2->enqueue(shuffle_group_3->dequeue());
			}
			else
			{
				shuffle_group_4->enqueue(shuffle_group_2->dequeue());
				shuffle_group_2->enqueue(shuffle_group_4->dequeue());
			}
		}
		else if ((randomNum == 3))
		{
			if(randomNum2 == 1)
			{
				shuffle_group_3->enqueue(shuffle_group_3->dequeue());
			}
			else if(randomNum2 == 2)
			{
				shuffle_group_1->enqueue(shuffle_group_3->dequeue());
				shuffle_group_3->enqueue(shuffle_group_1->dequeue());
			}
			else if(randomNum2 == 3)
			{
				shuffle_group_2->enqueue(shuffle_group_3->dequeue());
				shuffle_group_3->enqueue(shuffle_group_2->dequeue());
			}
			else
			{
				shuffle_group_4->enqueue(shuffle_group_3->dequeue());
				shuffle_group_3->enqueue(shuffle_group_4->dequeue());
			}
		}
		else
		{
			if(randomNum2 == 1)
			{
				shuffle_group_4->enqueue(shuffle_group_4->dequeue());
			}
			else if(randomNum2 == 2)
			{
				shuffle_group_2->enqueue(shuffle_group_4->dequeue());
				shuffle_group_4->enqueue(shuffle_group_2->dequeue());
			}
			else if(randomNum2 == 3)
			{
				shuffle_group_3->enqueue(shuffle_group_4->dequeue());
				shuffle_group_4->enqueue(shuffle_group_3->dequeue());
			}
			else
			{
				shuffle_group_1->enqueue(shuffle_group_4->dequeue());
				shuffle_group_4->enqueue(shuffle_group_1->dequeue());
			}
		}
	}

	i = 0;

	while (i < 13)
	{
		data->enqueue(shuffle_group_4->dequeue());
		i++;
	}
	while (i < 26)
	{
		data->enqueue(shuffle_group_3->dequeue());
		i++;
	}
	while (i < 39)
	{
		data->enqueue(shuffle_group_2->dequeue());
		i++;
	}
	while (i < 52)
	{
		data->enqueue(shuffle_group_1->dequeue());
		i++;
	}
}

// Returns card at the front of the queue
Card DeckOfCards::draw()
{
	return data->dequeue();
}

// Returns a string to print for all cards in the hand
string DeckOfCards::value()
{
	// Count the total value
	string showDeck = "";
	// Set temp node to be the head of the list
	Node<Card> *tempNode = data->front();
	for (int i = 0; i < data->size(); i++)
	{
		showDeck += tempNode->getData().getFace() + " ";
		tempNode = tempNode->getNext();
	}
	return showDeck;
}

std::ostream &operator<<(std::ostream &strm, DeckOfCards &cards)
{
	strm << cards.value();
	return strm;
}