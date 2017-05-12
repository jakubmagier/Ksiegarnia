#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Pracownicy.h"

using namespace std;

///Klasa abstrakcyjna
class Przedsiebiorstwo
{
protected:	
	string nazwa; ///<zmienna przechowuj¹ca nazwe przedsiebiorstwa
	string wlasciciel; ///<zmienna przechowuj¹ca nazwisko i imie wlasciciela
	static int iloscPrzedsiebiorstw; ///<zmienna przechowujaca ilosc utworzonych obiektow
	vector<Pracownicy>pracownicy;
public:
	///Kontruktor domyœlny
	Przedsiebiorstwo();
	///Destruktor wirtualny
	virtual ~Przedsiebiorstwo();
	///Procedura wirtualna
	virtual void wyswietlStan() = 0;
	///Procedura
	void dodajPracownika();
	///Procedura
	void usunPracownika();

	///Operator strumieniowy <<
	friend ostream&operator << (ostream &s, Przedsiebiorstwo &p);
	///Operator strumieniowy >>
	friend istream&operator >> (istream &s, Przedsiebiorstwo &p);
	
};
