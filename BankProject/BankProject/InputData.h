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
 * Purpose: Ingresar datos por consola
 ***********************************************************************/
#if !defined(__Input_Data_h)
#define __Input_Data_h

#include<iostream>
#include "Check.h"
#include "../BankProject/Date.h"
#include "Model/Person.h"

using namespace std;

template <class T>  class InputData{
public:
	InputData() {}
    string InputData<T>::matrizFloatDouble(int i, int j) {
        cout << "\nIngrese valor[" << i << "][" << j << "]: ";
        cin >> value;
        while (check.floatDouble(value)) {
            cout << "\nIngreso erroneo, vuelva a ingresar: ";
            cin >> value;
        }
        return value;
    }
    string InputData<T>::floatDouble() {
        cout << "\nIngrese valor real:  ";
        cin >> value;
        while (check.floatDouble(value)) {
            cout << "\nIngreso erroneo, vuelva a ingresar: ";
            cin >> value;
        }
        return value;
    }
private:
    Check check;   
    string value;
};
template <>         class InputData<int> {
public:
    string integer(string message) {
        cout << message;
        cin >> value;
        while (check.integer(value)) {
            cout << "\nIngreso erroneo, vuelva a ingresar: ";
            cin >> value;
        }
        return value;
    }
    string positiveInteger(string message) {
        cout << message;
        cin >> value;
        while (check.positiveInteger(value)) {
            cout << "\nIngreso erroneo, vuelva a ingresar: ";
            cin >> value;
        }
        return value;
    }
    string integerArray(int i) {
        cout << "\nIngrese valor[" << i << "]: ";
        cin >> value;
        while (check.integer(value)) {
            cout << "\nIngreso erroneo, vuelva a ingresar: ";
            cin >> value;
        }
        return value;
    }
    string matrizInteger(int const i, int const j) {
        cout << "\nIngrese valor[" << i << "][" << j << "]: ";
        cin >> value;
        while (check.integer(value)) {
            cout << "\nIngreso erroneo, vuelva a ingresar: ";
            cin >> value;
        }
        return value;
    }
private:
    Check check;
    string value;
};
template <>         class InputData<double> {
public:
    string realArray(int i) {
        cout << "\nIngrese valor real[" << i << "]: ";
        cin >> value;
        while (check.floatDouble(value)) {
            cout << "\nIngreso erroneo, vuelva a ingresar: ";
            cin >> value;
        }
        return value;
    }
private:
    Check check;
    string value;
};
template <>         class InputData<string> {
public:
    string CI(string message) {
        cout << message;
        cin >> value;
        while (check.identificationCard(value)) {
            cout << "\nCedula incorrecta, ingrese nuevamente: ";
            cin >> value;
        }
        //while para verificar si existe en el archivo
        return value;
    }
    string data(string message) {
        cout << message;
        cin >> value;
        while (check.character(value)) {
            cout << "\nNo use caracteres especiales, ingrese nuevamente: ";
            cin >> value;
        }
        return value;
    }
private:
    Check check;
    string value;
};
template <>         class InputData<Date> {
public:
    Date* date(string message) {
        cout << message;
        InputData<int> enter;
        year = enter.positiveInteger("Ingrese el anio: ");
        month = enter.positiveInteger("Ingrese el mes (1/12): ");
        day = enter.positiveInteger("Ingrese el dia: ");       
        while (check.date(year, month, day, 2020)) {
            cout << "Fecha incorrecta, ingrese nuevamente...\n";
            year = enter.positiveInteger("Ingrese el anio: ");
            month = enter.positiveInteger("Ingrese el mes (1/12): ");
            day = enter.positiveInteger("Ingrese el dia: ");            
        }        
        Date *date;
        date->setYear(year);
        date->setMonth(month);
        date->setDay(day);
        return date;
    }
private:
    Check check;
    string day, month, year;
};
#endif