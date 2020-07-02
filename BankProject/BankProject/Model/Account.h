/***********************************************************************
 * Module:  Acocount.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:41:09
 * Purpose: Declaration of the class Acocount
 ***********************************************************************/

#if !defined(__ModeloBancario_Acocount_h)
#define __ModeloBancario_Acocount_h

#include <iostream>

using namespace std;

class Account {
public:
    //Constructors
    Account(string numAccount) { this->numAccount = numAccount; }
    Account() {}
    //Destroyer
    ~Account() {}
    //Getter and setter of number account
    string getNumAccount(void) { return numAccount; }
    void setNumAccount(string numAccount) { this->numAccount = numAccount; }
    string createNumAccount(void);

private:
    string numAccount;    
};
#endif
