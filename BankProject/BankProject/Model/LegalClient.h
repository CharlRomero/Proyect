#pragma once
#if !defined(__Legal_h)
#define __Legal_h

#include "Person.h"

class LegalClient :public Person
{
public:
	LegalClient() {}
	string getRUC() { return this->ruc; }
	void setRUC(string id) { this->ruc = id; }
	virtual void readDates() {
		
		InputData<string> enter;
		this->setName(enter.data("Ingrese su nombre: "));
		this->setlastName(enter.data("Ingrese su apellido: "));
		this->setRUC(enter.CI("Ingrese su RUC: "));
		this->setNacionality(enter.data("Ingrese su nacioalidad: "));
		cout << "Fecha de nacimiento" << endl;
		
	}
private:
	string ruc;
};
#endif
