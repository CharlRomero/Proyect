#if !defined(__ModeloBancario_Banca_h)
#define __ModeloBancario_Banca_h

#include "..\Model\Person.h"
#include <fstream>
#include <vector>

using namespace std;

class BankStream {
public:
    //Constructors
    BankStream(string path) { this->path = path; };
    BankStream() {}
    //destroyer
    ~BankStream() {}
    //Getter and setter of path
    string getPath() { return path; }
    void setPath(string path) { this->path = path; }

    virtual void writeFile() = 0;
    
protected:
    ifstream read;
    ofstream write;
    string path;    
};
#endif