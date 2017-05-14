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
	///Metoda abstrakcyjna pozwalajaca uzyskac dane klas pochodnych.
	/**
	Umozliwia wyprowadzenie danych obiektu na dowolny strumien wyjscia.
	\param s dowolny strumien wyjscia*/
	virtual void wypiszDaneFirmy(ostream &s) = 0;
	///Metoda pozwalajaca uzyskac dane klasy podstawowej
	/**
	Umozliwia wyprowadzenie danych obiektu na dowolny strumien wyjscia.
	\param s dowolny strumien wyjscia*/
	void wypiszGlowneDaneFirmy(ostream &s);
	///Metoda pozwalajaca dodac pracownika do przedsiebiorstwa.
	void dodajPracownika();
	///Metoda pozwalajaca usunac pracownika z przedsiebiorstwa.
	void usunPracownika();

	///Operator strumieniowy <<
	friend ostream&operator << (ostream &s, Przedsiebiorstwo &p);
	///Operator strumieniowy >>
	friend istream&operator >> (istream &s, Przedsiebiorstwo &p);
	
};

///Przeciazony operator wyjscia.
/**Przeciazony operator pozwala na uzyskanie danych na dowlny strumien wyjscia. W tym programie wykorzystywany do wypisu danych na standardowe wyjscie lub do pliku.*/
ostream& operator<<(ostream &s, Przedsiebiorstwo &p);
///Przeciazony operator wejscia.
/**Przeciazony operator pozwala na pobranie danych z dowolnego strumienia wejscia. W tym programie wykorzystywany do odczytu danych z pliku.*/
istream& operator >> (istream &c, Przedsiebiorstwo &p);