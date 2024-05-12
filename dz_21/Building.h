#pragma once

#include "Building.h"
#include "Resident.h"
#include "Flat.h"
#include<iostream>
#include<cstring>
using namespace std;
class Building
{
private:

	char* _adress;
	Flat flats[20];

public:



	Building();
	Building(const char* adress);
	~Building();


	void setAddress(char* address);

	char* getAddress();

	void addPerson(const char* name, int nFlat);

	void del_person(const char* name, int nFlat);

	void showAllFlatsList();
	void showAllPerson();
	void showPersonListByFlat(int nFlat);





};

