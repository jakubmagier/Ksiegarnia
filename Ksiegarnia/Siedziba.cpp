#include <iostream>
#include <string>
#include "Siedziba.h"

using namespace std;

Siedziba::Siedziba()
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor obiektu Siedziba" << endl;

#endif
	adres;
	nr_telefonu;
	liczba_pomieszczen;
}

Siedziba::~Siedziba()
{
#ifdef _DEBUG

	cout << "Wywolano destruktor obiektu Siedziba" << endl;

#endif
}

//===========================METODY==============================

void Siedziba::wyswietlSiedzibe()
{
	cout << "Adres:" << adres << endl;
	cout << "Nr telefonu:" << nr_telefonu << endl;
	cout << "Liczba pomieszczen:" << liczba_pomieszczen << endl<<endl;
}

void Siedziba::dodajSiedzibe(string dodaj_adres, int dodaj_nr_telefonu, int dodaj_liczba_pomieszczen)
{
	adres = dodaj_adres;
	nr_telefonu = dodaj_nr_telefonu;
	liczba_pomieszczen = dodaj_liczba_pomieszczen;
}

//===========================OPERATORY==============================

ostream&operator<<(ostream&s, Siedziba &k) //operator strumieniowy
{
	s << "Adres: "<< k.adres << endl << "Nr telefonu: " << k.nr_telefonu << endl << "Liczba pomieszczen: " << k.liczba_pomieszczen << endl;
	return s;
}



