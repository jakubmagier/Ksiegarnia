#include <iostream>
#include <string>
#include "Siedziba.h"

using namespace std;

Siedziba::Siedziba()
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor obiektu Siedziba" << endl;

#endif
}


Siedziba::~Siedziba()
{
#ifdef _DEBUG

	cout << "Wywolano destruktor obiektu Siedziba" << endl;

#endif
}

//===========================METODY==============================
void Siedziba::ustawDaneSiedziby(string nowy_adres, int nowy_numer)
{
	adres = nowy_adres;
	nr_telefonu = nowy_numer;
}

void Siedziba::wypiszSiedzibe(ostream&s)
{
	s << *this;
}
//===========================OPERATORY==============================

ostream&operator<<(ostream&s, Siedziba &sb) //operator strumieniowy
{
	s << "Adres: "<< endl;
	s << sb.adres << endl;
	s << "Nr telefonu: " << endl;
	s << sb.nr_telefonu << endl;
	return s;
}

istream&operator>>(istream&s, Siedziba &sb) //operator strumieniowy
{
	string zmienna_pomocnicza;
	s >> zmienna_pomocnicza;
	s >> sb.adres;
	s >> zmienna_pomocnicza >> zmienna_pomocnicza;
	s >> sb.nr_telefonu;
	return s;
}

