#include <iostream>
#include <string>
#include "Pracownicy.h"

using namespace std;

Pracownicy::Pracownicy()
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor obiektu Pracownicy" << endl;

#endif
	nazwisko_i_imie = "Jan Kowalski";	                  //domyslne wartosci
	zarobki = 2000;
}

Pracownicy::Pracownicy(string nowe_nazw, float nowe_zarob)
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor z atr obiektu Pracownicy" << endl;

#endif
	nazwisko_i_imie = nowe_nazw;	                  //domyslne wartosci
	zarobki = nowe_zarob;
}

Pracownicy::~Pracownicy()
{
#ifdef _DEBUG

	cout << "Wywolano destruktor obiektu Pracownicy" << endl;

#endif
}

//===========================METODY==============================

void Pracownicy::wyswietlPracownika()
{
	cout << "Nazwisko i imie:" << nazwisko_i_imie << endl;
	cout << "Zarobki:" << zarobki << endl<<endl;
}




//===========================OPERATORY==============================

ostream&operator<<(ostream&s, Pracownicy &k) //operator strumieniowy
{
	s <<"Nazwisko i imie: "<< k.nazwisko_i_imie <<  endl << "Zarobki: " << k.zarobki << endl;
	return s;
}

