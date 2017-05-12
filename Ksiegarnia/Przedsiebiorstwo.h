#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Pracownicy.h"
#include "Siedziba.h"

using namespace std;

///Klasa abstrakcyjna
class Przedsiebiorstwo
{
protected:	
	string nazwa_przedsiebiorstwa; ///<zmienna przechowuj¹ca nazwe przedsiebiorstwa
	string wlasciciel; ///<zmienna przechowuj¹ca imie i nazwisko wlasciciela
	static int iloscPrzedsiebiorstw; ///<zmienna przechowujaca ilosc utworzonych obiektow (Przedsiebiorstw)
	vector<Pracownicy>pracownicy; ///<kontener zawierajacy dane pracownikow przedsiebiorstwa
	Siedziba siedziba; ///<siedziba klasa opisujaca siedziby firm wchodzacych w sklad przedsiebiorstwa
public:
	///Kontruktor domyœlny
	Przedsiebiorstwo();
	///Destruktor wirtualny
	virtual ~Przedsiebiorstwo();
	///Procedura wirtualna
	virtual void wyswietlStan() = 0;
	///Metoda pozwalajaca dodac pracownika do przedsiebiorstwa.
	void dodajPracownika();
	///Metoda pozwalajaca usunac pracownika z przedsiebiorstwa.
	void usunPracownika();

	///Operator strumieniowy <<
	friend ostream&operator << (ostream &s, Przedsiebiorstwo &p);
	///Operator strumieniowy >>
	friend istream&operator >> (istream &s, Przedsiebiorstwo &p);
	
};

