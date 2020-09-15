// LinkedListDemo.cpp
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Demo File (a.k.a Main)

#include <iostream>
#include <cstdlib>
#include <string>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList List;
    cout << "Print Sentence added to list" << endl;
    List.add("It caught him off guard that space steak smelled of seared steak");
    cout << "Let's count how many times the word 'steak' is in the above sentence" << endl;
    cout << List.count("steak") << endl;
	return 0;
}