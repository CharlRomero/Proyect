#pragma once
/***********************************************************************
 * Module:  Transaction.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:30:58
 * Purpose: Declaration of the class Transaction
 ***********************************************************************/

#if !defined(__ModeloBancario_Transaction_h)
#define __ModeloBancario_Transaction_h

#include "Account.h"
#include "Person.h"

class Transaction : public Account
{
public:
    //Constructor
    Transaction() {}
    //Destroyer
    ~Transaction() {}
    Person consult(Person customer);
    Person withdraw(float value, Person customer);
    int deposit(float value, Person customer);
};
#endif

