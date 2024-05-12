#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class Resident
{
char* _name;


public:
	
	Resident();

	Resident(const char* name);

	Resident(const Resident& objCopy);//Конструктор копіювання

	Resident& operator = (const Resident& objCopy);//Oператор присвоення

	~Resident(); 

	void setName(const char* name);

	char* getName();



	void showName()const;
};

