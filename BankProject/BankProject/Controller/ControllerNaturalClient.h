
#if !defined(__Controller_Natural_Client_h)
#define __Controller_Natural_Client_h

#include "BankStream.h"

class ControllerNaturalClient : BankStream{
public:
    //Constructor
    ControllerNaturalClient() : BankStream() {}
    //Destroyer
    ~ControllerNaturalClient() {}

    void writeFile(NaturalClient naturalClient) {
        string cadena = naturalClient.getNumAccount() + " " + naturalClient.getId() + " " + naturalClient.getName() + " " + naturalClient.getLastName() + " " + naturalClient.getNacionality() + " " + naturalClient.getAge() + "\n";
        file = fopen("naturalClients.txt", "a");
        fputs(cadena.c_str(), file);
        fclose(file);
        system("pause");
    }
    void print(string consult) {
        person = this->getData(consult);
        for (int i = 0; i < 10; i++)
            cout << *(person + i) << endl;

    }
    
};
#endif
