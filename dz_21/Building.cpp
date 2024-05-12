#include "Building.h"
#include "Resident.h"
#include "Flat.h"
#include<iostream>
#include<cstring>
using namespace std;


Building::Building():_adress(nullptr)
{
    
}

Building::Building(const char* adress):_adress(new char[strlen(adress)+1])
{
    strcpy_s(this->_adress, strlen(adress) + 1, adress);
}

Building::~Building()
{
    delete[] _adress;
}

void Building::setAddress(char* address)
{
    delete[] this-> _adress;
    this->_adress = new char[strlen(address) + 1];
    strcpy_s(this->_adress, strlen(address) + 1, address);
}

char* Building::getAddress()
{
    return _adress;
}

void Building::addPerson(const char* name, int nFlat)
{
    flats[nFlat].addResident(name);
}

void Building::del_person(const char* name, int nFlat)
{
    flats[nFlat].delResident(name);
}

void Building::showAllFlatsList()
{
    for (int i = 0; i < 20; ++i) {
        cout << "Flat " << i + 1 << " residents:" << endl;
        flats[i].showResidents();
        cout << endl;
    }
}

void Building::showAllPerson()
{
    for (int i = 0; i < 20; ++i) {
        cout << "Flat " << i + 1 << " residents:" << endl;
        flats[i].showResidents();
        cout << endl;
    }
}

void Building::showPersonListByFlat(int nFlat)
{
    cout << "Flat " << nFlat + 1 << " residents:" << endl;
    flats[nFlat].showResidents();
    cout << endl;
}
