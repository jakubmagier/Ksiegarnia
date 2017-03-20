#pragma once
#include <iostream>
#include <string>

using namespace std;

class Siedziba
{
	string adres;
	int nr_telefonu;
	int liczba_pomieszczen;

public:
	
	void Siedziba::wyswietlSiedzibe();
	void dodajSiedzibe(string dodaj_adres, int dodaj_nr_telefonu, int dodaj_liczba_pomieszczen);
	friend ostream& operator<<(ostream&s, Siedziba &k);

	Siedziba();
	~Siedziba();
};

