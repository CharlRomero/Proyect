/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
/***********************************************************************
 * Module:  IngresoDatos.h
 * Author:  Abigail Cabascango
 * Modified: domingo, 28 de mayo de 2020 17:51:04
 * Purpose: Validar datos ingresados por consola
 ***********************************************************************/

#if !defined(__Check_h)
#define __Check_h

#include<iostream>
#include <ctype.h>
#include <string.h>
#include "Convert.h"

using namespace std;

class Check {
public:
	Check() {}
	bool integer(string value) {
		int cont = 0;
		try {
			for (size_t i = 0; i < value.length(); i++) {
				if (isalpha(value[i]))
					throw 1;
				if (!isdigit(value[i]) && value[i] != '-')
					throw 1;
				if (value[i] == '-')
					cont++;
				if (cont > 1)
					throw 1;
			}
		}
		catch (int e) {
			return true;
		}
		return false;
	}
	bool floatDouble(string value) {
		int cont = 0;

		try {
			for (size_t i = 0; i < value.length(); i++) {
				if (isalpha(value[i]))
					throw 1;
				if (!isdigit(value[i]) && value[i] == '.')
					cont++;
				if (!isdigit(value[i]) && value[i] == '-')
					cont++;
				if (cont > 2)
					throw 1;
			}
		}
		catch (int e) {
			return true;
		}
		return false;

	}
	bool positiveInteger(string cadena) {
		try {
			for (size_t i = 0; i < cadena.length(); i++) {
				if (isalpha(cadena[i]))
					throw 1;
				if (!isdigit(cadena[i]))
					throw 1;
			}

		}
		catch (int e) {
			return true;
		}
		return false;
	}
	bool identificationCard(string identificationCard) {

		try {

			if (identificationCard.length() < 9)
				throw 1;

			for (size_t i = 0; i < identificationCard.length(); i++)
			{
				if (isalpha(identificationCard[i]))
					throw 1;
				if (!isdigit(identificationCard[i]))
					throw 1;				
				if (identificationCard[i] == '.')
					throw 1;
				if (identificationCard[i] == '-')
					throw 1;
				if (identificationCard[0] < 3 && identificationCard[1] < 5)
					throw 1;
				if (identificationCard[2] < 7)
					throw 1;
				if (identificationCard[9] != lastDigit(identificationCard))
					throw 1;
			}

		}
		catch (int e) {
			return true;
		}
		return false;
	}
	bool character(string str...) {
		try {

			for (size_t i = 0; i < str.length(); i++)
			{
				if (str[i] < 65 || str[i] > 90)
					throw 1;
			}

		}
		catch (int e) {
			return true;
		}
		return false;
	}
	bool date(string year, string month, string day, int actualYear) {
		try {
			if (atoi(year.c_str()) < 1900 || atoi(year.c_str()) > actualYear)
				throw 1;
			if (atoi(month.c_str()) < 0 || atoi(month.c_str()) > 13)
				throw 1;
			if (atoi(day.c_str()) < 0 || atoi(day.c_str()) > 31)
				throw 1;
		}
		catch (int e) {
			return true;
		}
		return false;
	}
private:
	char lastDigit(string identificationCard) {
		int aux, impar, result = 0;
		Convert<int> convert;
		for (size_t i = 0; i < 5; i++) {
			aux = (2 * convert.charToInt(identificationCard.at(2 * i)));
			if (i < 4)
				impar = convert.charToInt(identificationCard.at((2 * i + 1)));

			if (aux >= 10)
				aux -= 9;

			result += (aux + impar);
			impar = 0;
		}
		result = calculateTen(result) - result;
		return convert.intToChar(result);
	}
	int calculateTen(int ten) {
		return (ten - (ten % 10)) + 10;
	}
};
#endif