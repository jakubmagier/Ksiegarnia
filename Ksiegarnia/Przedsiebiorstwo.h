#pragma once
#include <iostream>
#include <fstream>

using namespace std;

///Klasa abstrakcyjna
class Przedsiebiorstwo
{
protected:
	///pole przechowujące nazwisko i imie wlasciciela
	string nazwisko_imie;
public:
	///Kontruktor domyślny
	Przedsiebiorstwo();
	///Destruktor wirtualny
	virtual ~Przedsiebiorstwo();
	///Procedura wirtualna
	virtual void wyswietlStan() = 0;
	///Procedura wirtualna
	virtual void dodajPracownika() = 0;

	///Operator strumieniowy <<
	friend ostream&operator << (ostream &s, Przedsiebiorstwo &p);
	///Operator strumieniowy >>
	friend istream&operator >> (istream &s, Przedsiebiorstwo &p);
	
};
