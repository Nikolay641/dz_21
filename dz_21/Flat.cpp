#include "Flat.h"
#include "Resident.h"
Flat::Flat()
{
	_rooms = 1;
	_sqeare = 100;
	_amountOfResident = 0;

}

Flat::Flat(int rooms, float sqeare)
{
	_rooms = rooms;
	_sqeare = sqeare;
	_amountOfResident = 0;
	_Residents = nullptr;

}

//Flat::Flat(const Flat& other) {
//
//	return;
//}

Flat::~Flat()
{
	if (_Residents != nullptr) {
		delete[] _Residents;
	}
}

void Flat::setRooms(int rooms)
{
	this->_rooms = rooms;
}

void Flat::setSqeare(float sqeare)
{
	this->_sqeare = sqeare;
}


int Flat::getRooms()
{
	return _rooms;
}

float Flat::getSqeare()
{
	return _sqeare;
}

int Flat::getAmountOfResident()
{
	return _amountOfResident;
}



void Flat::addResident(const char* name)
{
	Resident* tmp = new Resident[_amountOfResident + 1];// за замовчуванням

	for (int i = 0; i < _amountOfResident; i++)
	{
		tmp[i] = _Residents[i];//о-пр присвоювання
	}

	tmp[_amountOfResident] = Resident(name);

	if (_Residents != nullptr) delete[]_Residents;

	_Residents = tmp;
	_amountOfResident++;
}

void Flat::delResident(const char* name)
{
	int index = -1;
	for (int i = 0; i < _amountOfResident; i++)
	{
		if (strcmp(_Residents[i].getName(), name) == 0) {
			index = i;
			break;
		}		
	}
	if (index != -1) {
		Resident* tmp = new Resident[_amountOfResident] - 1;
		for (int i = 0, j = 0; i < _amountOfResident; i++)
		{
			if (i != index) {
				tmp[j++] = _Residents[i];
			}
		}
		delete[] _Residents;
		_Residents = tmp;
		_amountOfResident--;
	}

}

void Flat::showResidents()const
{
	for (int i = 0; i < _amountOfResident; i++)
	{
		cout << "residents: " << i + 1 << ": " << _Residents[i].getName() << endl;
	}
}
