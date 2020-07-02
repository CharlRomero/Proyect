#if !defined(__Menu_h)
#define __Menu_h

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include "..\BankProject\Model\Account.h"
#include "..\BankProject\Model\Person.h"
using namespace std;

class Menu {
public:
	Menu() {

		*(menuHead + 0)				= "	Menu cuenta			";
		*(menuHead + 1)				= "	Menu transaccion	";
		*(menuHead + 2)				= "	Menu cliente		";
		*(menuHead + 3)				= "	Salir				";

		*(accountOption + 0)		= "	Cuenta Ahorros				";
		*(accountOption + 1)		= "	Cuenta Corriente			";
		*(accountOption + 2)		= "	Regresar al menu principal	";

		*(clientOption + 0)			= "	Cedula						";
		*(clientOption + 1)			= "	RUC							";
		*(clientOption + 2)			= "	Regresar al menu principal	";

		*(transactionOption + 0)	= "	Deposito					";
		*(transactionOption + 1)	= "	Retiro						";
		*(transactionOption + 2)	= "	Regresar al menu principal	";

		*(typeClientOption + 0)		= "	Cliente Natural				";
		*(typeClientOption + 1)		= "	Cliente Juridico			";
		*(typeClientOption + 2)		= "	Regresar al menu principal	";

	}
	void menu();
	void menuClient();
	void menuAccount();
	void menuTransaction();
	void menuTypeClient();
private:
	string* menuHead			= new string[4];
	string* accountOption		= new string[3];
	string* clientOption		= new string[3];
	string* transactionOption	= new string[3];
	string* typeClientOption	= new string[3];
};

void Menu::menuTypeClient() {
	int cursor = 0;
	char tecla;
	int cont = 1;
	system("cls");

	for (;;) {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
		cout << "                SELECCIONE UNA OPCION         " << endl;
		for (int i = 0; i < 3; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << *(typeClientOption + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(typeClientOption + i) << endl;
			}
		}
		for (;;) {
			tecla = _getch();
			if (tecla == 80) {
				cursor++;
				if (cursor == 7) {
					cursor = 0;
				}
				break;
			}
			if (tecla == 72) {
				cursor--;
				if (cursor == -1) {
					cursor = 4;
				}
				break;
			}
			if (tecla == 13) {
				switch (cursor) {
				case 0:					
					break;
				case 1:					
					break;
				case 2:
					menu();
					break;
				}
			}
		}
	}
	free(typeClientOption);
}
void Menu::menuClient() {
	int cursor = 0;
	char tecla;
	int cont = 1;
	system("cls");

	for (;;) {
		system("cls");
		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 70);
		cout << "                MENU CLIENTES         " << endl;
		for (int i = 0; i < 3; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << *(clientOption + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(clientOption + i) << endl;
			}
		}//complejidad de algoritmos ejemplo
		for (;;) {
			tecla = _getch();
			if (tecla == 80) {
				cursor++;
				if (cursor == 3) {
					cursor = 0;
				}
				break;
			}
			if (tecla == 72) {
				cursor--;
				if (cursor == -1) {
					cursor = 4;
				}
				break;
			}
			if (tecla == 13) {
				switch (cursor) {
				case 0:
					break;
				case 1:
					break;
				case 2:
					menu();
					break;
				}
			}
		}
	}
	free(clientOption);
}
void Menu::menuAccount() {
	int cursor = 0;
	char tecla;
	int cont = 1;

	system("cls");
	for (;;) {
		system("cls");
		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
		cout << "                MENU CUENTAS         " << endl;
		for (int i = 0; i < 3; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << *(accountOption + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(accountOption + i) << endl;
			}
		}//complejidad de algoritmos ejemplo
		for (;;) {
			tecla = _getch();
			if (tecla == 80) {
				cursor++;
				if (cursor == 3) {
					cursor = 0;
				}
				break;
			}
			if (tecla == 72) {
				cursor--;
				if (cursor == -1) {
					cursor = 4;
				}
				break;
			}
			if (tecla == 13) {
				switch (cursor) {
				case 0:
					break;
				case 1:
					break;
				case 2:
					menu();
					break;
				}
			}
		}
	}
	free(accountOption);
}
void Menu::menuTransaction() {
	int cursor = 0;
	char tecla;
	int cont = 1;
	system("cls");

	for (;;) {
		system("cls");
		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
		cout << "                MENU TRANSACCION         " << endl;
		for (int i = 0; i < 3; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << *(transactionOption + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(transactionOption + i) << endl;
			}
		}//complejidad de algoritmos ejemplo
		for (;;) {
			tecla = _getch();
			if (tecla == 80) {
				cursor++;
				if (cursor == 3) {
					cursor = 0;
				}
				break;
			}
			if (tecla == 72) {
				cursor--;
				if (cursor == -1) {
					cursor = 4;
				}
				break;
			}
			if (tecla == 13) {
				switch (cursor) {
				case 0:
					break;
				case 1:
					break;
				case 2:
					menu();
					break;
				}
			}
		}
	}
	free(transactionOption);
}
//Menu principal
void Menu::menu() {

	int cursor = 0;
	char tecla;
	int cont = 1;

	for (;;) {
		system("cls");
		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
		cout << "					BIENVENIDO                    " << endl;
		for (int i = 0; i < 4; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << *(menuHead + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(menuHead + i) << endl;
			}
		}//complejidad de algoritmos ejemplo
		for (;;) {
			tecla = _getch();
			if (tecla == 80) {
				cursor++;
				if (cursor == 4) {
					cursor = 0;
				}
				break;
			}
			if (tecla == 72) {
				cursor--;
				if (cursor == -1) {
					cursor = 5;
				}
				break;
			}
			if (tecla == 13) {
				switch (cursor) {
				case 0:
					menuAccount();
					break;
				case 1:
					menuTransaction();
					break;
				case 2:
					menuClient();
					break;
				case 3:
					system("cls");
					cout << endl << "<<<<<<<<<	Gracias por usar nuestro programa	>>>>>>>>>" << endl;
					exit(1);
					break;
				}
			}
		}
	}
	free(menuHead);
}
#endif
