#include "Resident.h"
#include "Flat.h"

Resident::Resident()
{
    _name = new char[50] {"Mykola Viktorovish"};
}

Resident::Resident(const char* name)
{
    int sizeName = strlen(name) + 1;
    _name = new char[sizeName];
    strcpy_s(_name, sizeName, name);
}

Resident::Resident(const Resident& objCopy)
{
    int sizeName = strlen(objCopy._name) + 1;
    this->_name = new char[sizeName];
    strcpy_s(this->_name, sizeName, objCopy._name);
}

Resident& Resident::operator=(const Resident& objCopy)
{
    delete[] this->_name;

    int sizeName = strlen(objCopy._name) + 1;
    this->_name = new char[sizeName];
    strcpy_s(this->_name, sizeName, objCopy._name);
    // TODO: insert return statement here
}

Resident::~Resident()
{
    delete[] _name;
}

void Resident::setName(const char* name)
{
    if (strlen(name) > 3) {
        delete[] _name;

        int sizeName = strlen(name) + 1;
        _name = new char[sizeName];
        strcpy_s(_name, sizeName, name);
    }
}

char* Resident::getName() 
{
    return _name;
}

void Resident::showName()const
{
    cout << "***********************************\n";
    cout << "Name:  " << _name << endl;
    
}
