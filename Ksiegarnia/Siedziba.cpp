#include <iostream>
#include <string>
#include "Siedziba.h"

using namespace std;

Siedziba::Siedziba()
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor obiektu Siedziba" << endl;

#endif
	adres = "Marszalkowska 234";
	nr_telefonu = 777888999;
}

Siedziba::Siedziba(string nowy_adres, int nowy_numer)
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor z atr obiektu Siedziba" << endl;

#endif
	adres = nowy_adres;
	nr_telefonu = nowy_numer;
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
}

//===========================OPERATORY==============================

ostream&operator<<(ostream&s, Siedziba &k) //operator strumieniowy
{
	s << "Adres: "<< k.adres << endl << "Nr telefonu: " << k.nr_telefonu << endl;
	return s;
}



