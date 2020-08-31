// This defines a class that represents an
// account object for double numbers of a currency.
// Programmer: Alex Mendes
// Last modified:  14 Dec 2017
// This file should be used in conjunction with Lab 1 for SENG1120
#ifndef JACOB_ACCOUT
#define JACOB_ACCOUT

#include <iostream>
#include <string>

using namespace std;

class account
{
public:
    // Members that are externally visible

    // These are member functions

    // Constructor
    // Precondition: none
    // Postcondition: A new instance of account is created 
    // and its instance data initialsed to either zero or a 
    // parameter-provided value
    account(const double initialValue = 0.0, const string initialName = NULL);

    //Mutators
    void setName(const string name);
    void deposit(const double amount);
    void withdraw(const double amount);

    // Accessors
    double balance() const;
    string getName() const;
    bool has_funds() const;

private:
    double acc_balance;
    string name;
};

#endif