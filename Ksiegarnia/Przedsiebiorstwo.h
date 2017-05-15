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
	string nazwa_przedsiebiorstwa; ///<zmienna przechowujaca nazwe przedsiebiorstwa
	string wlasciciel; ///<zmienna przechowujaca imie i nazwisko wlasciciela
	static int iloscPrzedsiebiorstw; ///<zmienna przechowujaca ilosc utworzonych obiektow (Przedsiebiorstw)
	vector<Pracownicy>pracownicy; ///<kontener zawierajacy dane pracownikow przedsiebiorstwa
	Siedziba siedziba; ///<siedziba klasa opisujaca siedziby firm wchodzacych w sklad przedsiebiorstwa
public:
	///Kontruktor domyslny
	Przedsiebiorstwo();
	///Destruktor wirtualny
	virtual ~Przedsiebiorstwo();
	///Metoda abstrakcyjna pozwalajaca uzyskac dane klas pochodnych.
	/**
	Umozliwia wyprowadzenie danych obiektu na dowolny strumien wyjscia.
	\param s dowolny strumien wyjscia*/
	virtual void wypiszDaneFirmy(ostream &s) = 0;
	///Metoda abstrakcyjna pozwalajaca na wprowadzenie danych utworzonego obiektu.
	/**
	Umozliwia wprowadzanie danych obiektu z pliku.
	\param s strumien wejscia*/
	virtual void wprowadzDaneFirmyZPliku(istream &s);
	///Metoda pozwalajaca uzyskac dane klasy podstawowej
	/**
	Umozliwia wyprowadzenie danych obiektu na dowolny strumien wyjscia.
	\param s dowolny strumien wyjscia*/
	void wypiszGlowneDaneFirmy(ostream &s);
	///Metoda pozwalajaca wprowadzic dane przedsiebiorstwa.
	/**Metoda pozwala na dodanie nazwy i wlasciciela firmy.
	\param nowa_nazwa nazwa przedsiebiorstwa
	\param nowy_wlasciciel imie i nazwisko wlasciciela przedsiebiorstwa*/
	void wprowadzDanePrzedsiebiorstwa(string nowa_nazwa, string nowy_wlasciciel);
	///Metoda pozwalajaca dodac pracownika do przedsiebiorstwa.
	/**Metoda pozwala na dodanie pracownika o podanym nazwisku i zarobkach.
	\param nazwisko nazwisko pracownika ktorego chcemy dodac do firmy
	\param zarobki zarobki pracownika ktorego chcemy dodac do firmy*/
	void dodajPracownika(string nazwisko, float zarobki);
	///Metoda pozwalajaca usunac pracownika z przedsiebiorstwa.
	/**Metoda pozwala na usuniecie pracownika o wybranym numerze.
	\param ktory numer pracownika ktorego chcemy usunac z firmy*/
	void usunPracownika(int ktory);

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
istream& operator >> (istream &s, Przedsiebiorstwo &p);