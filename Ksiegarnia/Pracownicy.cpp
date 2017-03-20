#include <iostream>
#include <string>
#include "Pracownicy.h"

using namespace std;

Pracownicy::Pracownicy()
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor obiektu Pracownicy" << endl;

#endif
	nazwisko_i_imie = "Jan Kowalski";	
	stanowisko = "Kasjer";                     //domyslne wartosci
	zarobki = 2000;
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
	cout << "Stanowisko:" << stanowisko << endl;
	cout << "Zarobki:" << zarobki << endl<<endl;
}

void Pracownicy::wprowadzNazwiskoIImie(string nowe_nazwisko_imie)
{
	nazwisko_i_imie = nowe_nazwisko_imie;
}

void Pracownicy::wprowadzStanowisko(string nowe_stanowisko)
{
	stanowisko = nowe_stanowisko;
}

void Pracownicy::wprowadzZarobki(float nowe_zarobki)
{
	zarobki = nowe_zarobki;
}

//===========================OPERATORY==============================

ostream&operator<<(ostream&s, Pracownicy &k) //operator strumieniowy
{
	s <<"Nazwisko i imie: "<< k.nazwisko_i_imie << endl << "Stanowisko: "<< k.stanowisko << endl << "Zarobki: " << k.zarobki << endl;
	return s;
}

