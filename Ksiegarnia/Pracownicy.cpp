#include <iostream>
#include <string>
#include "Pracownicy.h"

using namespace std;

Pracownicy::Pracownicy()
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor obiektu Pracownicy" << endl;

#endif
}

Pracownicy::Pracownicy(string nowe_nazw, float nowe_zarob)
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor z parametrami obiektu Pracownicy" << endl;

#endif
	nazwisko_i_imie = nowe_nazw;	                  
	zarobki = nowe_zarob;
}

Pracownicy::~Pracownicy()
{
#ifdef _DEBUG

	cout << "Wywolano destruktor obiektu Pracownicy" << endl;

#endif
}

//===========================OPERATORY==============================

ostream&operator<<(ostream&s, Pracownicy &p) //operator strumieniowy
{
	s << "Nazwisko i imie: "<< endl;
	s << p.nazwisko_i_imie <<  endl;
	s << "Zarobki: " << endl;
	s << p.zarobki << endl;
	return s;
}

