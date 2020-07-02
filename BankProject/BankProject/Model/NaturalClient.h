#pragma once
#if !defined(__Natural_h)
#define __Natural_h

#include "Person.h"


class Natural : public Person {
public:
	Natural() {}
	string getId() { return id; }
	void setId(string id) { this->id = id; }
	virtual void readDates() {

		InputData<string> enter;
		InputData<Date> enterDate;

		this->setName(enter.data("Ingrese su nombre: "));
		this->setlastName(enter.data("Ingrese su apellido: "));
		this->setId(enter.CI("Ingrese su cedula: "));
		this->setNacionality(enter.data("Ingrese su nacionalidad: "));
		this->setId(enter.CI("Ingrese su cedula: "));
		
	}
};
#endif
