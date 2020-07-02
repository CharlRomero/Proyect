
#if !defined(__Controller_Account_h)
#define __Controller_Account_h

#include "BankStream.h"
#include "..\Model\Account.h"

class ControllerAccount : BankStream {
public:
	//Constructor
	ControllerAccount(string path) : BankStream(path) {}
	//Destroyer
	~ControllerAccount() {}

	void writeFile() {
        write.open(path, ios::out | ios::app);
        if (write.fail())
            cout << "No se pudo abrir el archivo..." << endl;

        write << account.getNumAccount();

        write.close();
	}
	vector<Account> getData() {
        read.open(path, ios::in);

        if (read.is_open()) {
            string numAccount;
            vector<Account> accounts;
            while (!read.eof()) {
                read >> numAccount;
                Account account(numAccount);
                accounts.push_back(account);
            }
            return accounts;
        }
        else {
            cout << "No se pudo abrir el archivo..." << endl;
        }
        read.close();
	}
private:
    Account account;
};
#endif

