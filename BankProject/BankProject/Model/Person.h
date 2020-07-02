/***********************************************************************
 * Module:  Person.h
 * Author:  Abigail
 * Modified: Saturday, June 13, 2020 21:37:31
 * Purpose: Declaration of the class Person
 ***********************************************************************/

#if !defined(__Person_h)
#define __Person_h

#include "Account.h"
#include "../Date.h"
#include <iostream>
#include "../InputData.h"

using namespace std;

class Person {
public:
	Person(string id, string name, string lastName, string nacionality, Date* date) {
		this->id = id;
		this->name = name;
		this->lastName = lastName;
		this->nacionality = nacionality;
		this->age = date->calcAge();
	}
	Person() {}
	~Person() {}

	string getName() { return name; }
	void setName(string name) { this->name = name; }

	string getNacionality() { return nacionality; }
	void setNacionality(string nacionality) { this->nacionality = nacionality; }

	string getlastName() { return lastName; }
	void setlastName(string lastName) { this->lastName = lastName; }
	
	string getAge() { return age; }
	void setAge(string age) { this->age = age; }

	virtual void readDates()=0;
protected:
	string id;
	string name;
	string nacionality;
	string lastName;
	string age;
	Date *date;
};
#endif
