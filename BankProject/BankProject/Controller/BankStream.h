#if !defined(__ModeloBancario_Banca_h)
#define __ModeloBancario_Banca_h

#include "..\Model\Person.h"
#include <fstream>
#include <vector>

using namespace std;

class BankStream {
public:
    //Constructors    
    BankStream() {}
    //destroyer
    ~BankStream() {}
    //Getter and setter of path    

    virtual void writeFile() = 0;
    
protected:
    ifstream read;
    FILE* file;
};
#endif