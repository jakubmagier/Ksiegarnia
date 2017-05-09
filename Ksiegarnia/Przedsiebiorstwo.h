#pragma once
#include <iostream>
#include <fstream>

using namespace std;

///Klasa abstrakcyjna
class Przedsiebiorstwo
{
	string nazwa; ///<zmienna przechowująca nazwe przedsiebiorstwa
protected:	
	string wlasciciel; ///<zmienna przechowująca nazwisko i imie wlasciciela
	static int iloscObiektow; ///<zmienna przechowujaca ilosc utworzonych obiektow
public:
	///Kontruktor domyślny
	Przedsiebiorstwo();
	///Destruktor wirtualny
	virtual ~Przedsiebiorstwo();
	///Procedura wirtualna
	virtual void wyswietlStan() = 0;
	///Procedura wirtualna
	//virtual void dodajPracownika() = 0;

	///Operator strumieniowy <<
	friend ostream&operator << (ostream &s, Przedsiebiorstwo &p);
	///Operator strumieniowy >>
	friend istream&operator >> (istream &s, Przedsiebiorstwo &p);
	
};
