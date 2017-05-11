#pragma once
#include <iostream>
#include <fstream>

using namespace std;

///Klasa abstrakcyjna
class Przedsiebiorstwo
{
	string nazwa; ///<zmienna przechowuj¹ca nazwe przedsiebiorstwa
protected:	
	string wlasciciel; ///<zmienna przechowuj¹ca nazwisko i imie wlasciciela
	static int iloscPrzedsiebiorstw; ///<zmienna przechowujaca ilosc utworzonych obiektow
public:
	///Kontruktor domyœlny
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
