// This program creates an instance of a simple account object and
// performs some operations on it
// Programmer:  Alex Mendes
// Last modified:  01 Aug 2016
// This file should be used in conjunction with Lab 1 for SENG1120

#include <iostream>
#include <cstdlib>
#include "account.h"

using namespace std;

account& compareAccRef(account& acc1, account& acc2) {
    if(acc1.balance() < acc2.balance()){
        return acc2;
    } else {
        return acc1;
    }
}

account* compareAccPtr(account* acc1, account* acc2) {
    if(acc1->balance() < acc2->balance()){
        return acc2;
    } else {
        return acc1;
    }
}

int main()
{
    cout << "Creating first account with initial amount 10" << endl;

    account account_1;

    account* ptr = new account();
    ptr->deposit(10);

    account* ptr2 = new account();
    ptr->deposit(25);
    
	if (ptr->has_funds())
    {
        cout << "Balance is " << ptr->balance() << endl;
        cout << "Deposit 100" << endl;
        ptr->deposit(100);
        cout << "Balance is " << ptr->balance() << endl;
        cout << "Withdraw 75" << endl;
        ptr->withdraw(75);
        cout << "Balance is " << ptr->balance() << endl;
    }
    else
        cout << "Account is empty" << endl << endl;

	cout << "Creating second account with initial amount 0" << endl;
	account my_account2;
	my_account2.deposit(0);
	if (my_account2.has_funds())
	{
		cout << "Balance is " << my_account2.balance() << endl;
		cout << "Deposit 200" << endl;
		my_account2.deposit(200);
		cout << "Balance is " << my_account2.balance() << endl;
		cout << "Withdraw 140" << endl;
		my_account2.withdraw(140);
		cout << "Balance is " << my_account2.balance() << endl;
	}
	else {cout << "Account is empty" << endl << endl;}

    cout << "Creating a copy of account_1" << endl;
    account my_copy = account_1;
    cout << "Balance of account_1" << endl;
    cout << my_copy.balance() << endl;
    cout << "Balance of my_copy" << endl;
    my_copy.deposit(750);
    cout << "New balance of my_copy" << endl;
    cout << my_copy.balance() << endl;
    cout << "New Balance of account_1" << endl;
    cout << account_1.balance() << endl << endl;

    cout << "Creating a reference to account_1" << endl;
    account& my_copy2 = account_1;
    cout << "Balance of account_1" << endl;
    cout << my_copy2.balance() << endl;
    cout << "Balance of my_copy" << endl;
    my_copy2.deposit(500);
    cout << "New balance of my_copy" << endl;
    cout << my_copy2.balance() << endl;
    cout << "New Balance of account_1" << endl;
    cout << account_1.balance() << endl << endl;

    cout << "Compare function Reference" << endl;
    account bigAccount = compareAccRef(my_copy, account_1);
    cout << bigAccount.balance() << endl << endl;

    cout << "Compare function Pointer" << endl;
    account* bigAccountPtr = compareAccPtr(ptr, ptr2);
    cout << bigAccountPtr->balance() << endl << endl;

    cout << "Shits and gigs Q6" << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << ptr->balance() << endl;
    
	return EXIT_SUCCESS;
}