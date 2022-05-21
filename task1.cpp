#include<iostream>
using namespace std;

class Ship
{
protected:
	char* name=new char[20];
	int year;
public:
	Ship(char* n, int y)
	{
		name = n;
		year = y;
	}
	virtual void print()
	{
		cout << "Ship : " << name << endl << "Built Year : " << year << endl;
	}
};

class CruiseShip :public Ship
{
public:
	int passengers = 0;
	CruiseShip(char* n1, int d1,int pass) :Ship(n1, d1)
	{
		passengers = pass;
	}

	void print()
	{
		cout << "Ship : " << name << endl << "Built Year : " << year << endl << "Passengers : " << passengers << endl;
	}

};

class CargoShip :public Ship
{
public:
	int capacity = 0;
	CargoShip(char* n2, int d2, int cap) :Ship(n2, d2)
	{
		capacity = cap;
	}

	void print()
	{
		cout << "Ship : " << name << endl << "Built Year : " << year << endl << "Capacity(tons) : " << capacity << endl;
	}
};


int main()
{
	char name[20] = { 't', 'i', 't', 'a', 'n', 'i', 'c' };
	CruiseShip c1(name, 2016, 100);
	CargoShip c2(name, 2021, 200);
	Ship* s[2];
	s[0] = &c1;
	s[1] = &c2;
	s[0]->print();
	s[1]->print();
	system("pause");
	return 0;
}
