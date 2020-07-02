/***********************************************************************
 * Module:  CustumerType.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:19:53
 * Purpose: Declaration of the class CustumerType
 ***********************************************************************/

#if !defined(__ModeloBancario_CustumerType_h)
#define __ModeloBancario_CustumerType_h

#include "..\Model\Person.h"

class Customer : public Person {
public:
    //Constructors
    Customer(string id, string name, string nacionality, string age, Date date) : Person(id, name, nacionality, age, date) {}
    Customer(string id, string name, string nacionality, string age) : Person(id, name, nacionality, age) {}
    Customer() : Person() {}
    //Destroyer
    ~Customer() {}
};
#endif