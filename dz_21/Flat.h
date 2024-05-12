#pragma once
#include<iostream>
#include<cstring>
#include "Flat.h"
using namespace std;



class Flat
{

	int _rooms;
	float _sqeare;
	int _amountOfResident;
	Resident* _Residents;


public:
	Flat();
	Flat(int rooms, float sqeare);
	//Flat(const Flat& other);
	~Flat();

	void setRooms(int rooms);
	void setSqeare(float sqeare);
	


	int getRooms();
	float getSqeare();
	int getAmountOfResident();

	void addResident(const char* name);

	void delResident(const char* name);

	void showResidents()const;

};

