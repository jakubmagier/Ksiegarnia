#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Ksiazka.h"
#include "Pracownicy.h"
#include "Siedziba.h"
#include "Przedsiebiorstwo.h"

using namespace std;

///Klasa Ksiegarnia, pochodna klasy Przedsiebiorstwo
class Ksiegarnia: public Przedsiebiorstwo
{
protected:

	string nazwa; ///<zmienna przechowujaca nazwe ksiegarni
	vector<Ksiazka>ksiazka; ///<kontener zawierajacy dane ksiazek znajdujacych sie w Ksiegarni

public:

	static int iloscKsiegarni; ///<zmienna przechowujaca ilosc utworzonych obiektow (Ksiegarni)
	///domyslny konstruktor
	Ksiegarnia(); 
	///destruktor
	~Ksiegarnia(); 
	///Metoda pozwalajaca dodac ksiazke do Ksiegarni.
	/**Metoda pozwala na dodanie ksiazki o podanej nazwie, nazwisku autora i roku wydania.
	\param tytul nazwa ksiazki ktora chcemy dodac do Ksiegarni
	\param autor nazwisko autora ksiazki ktora dodajemy
	\param rok_wydania rok wydania ksiazki ktora dodajemy*/
	void dodajKsiazke(string tytul, string autor, int rok_wydania);
	///Metoda pozwalajaca usunac ksiazke z Ksiegarni.
	/**Metoda pozwala na usuniecie ksiazki o wybranym numerze.
	\param ktora numer ksiazki ktora chcemy usunac z Ksiegarni*/
	void usunKsiazke(int ktora);
	///Metoda pozwalajaca uzyskac dane na temat Ksiegarni.
	/**
	Umozliwia wyprowadzenie danych obiektu na dowolny strumien wyjscia.
	\param s dowolny strumien wyjscia*/
	void wypiszDaneFirmy(ostream &s);
	///Metoda pozwalajaca na wprowadzenie danych Ksiegarni.
	/**
	Umozliwia wprowadzanie danych obiektu z pliku.
	\param s strumien wejscia*/
	void wprowadzDaneFirmyZPliku(istream &s);
	///Metoda pozwalajaca wprowadzic dane Ksiegarni.
	/**Metoda pozwala na dodanie nazwy, adresu i nr telefonu Ksiegarni.
	\param nowa_nazwa nazwa ksiegarni
	\param nowy_adres adres ksiegarni
	\param nowy_telefon telefon do ksiegarni*/
	void wprowadzDaneKsiegarni(string nowa_nazwa, string nowy_adres, int nowy_telefon);
	///Zaprzyjazniony operator strumieniowy
	friend istream&operator>>(istream&s, Ksiegarnia &k);
	///Zaprzyjazniony operator strumieniowy
	friend ostream&operator<<(ostream&s, Ksiegarnia &k);
	
};

///Przeciazony operator wejscia.
/**Przeciazony operator pozwala na pobranie danych z dowolnego strumienia wejscia. W tym programie wykorzystywany do odczytu danych z pliku.*/
istream& operator >> (istream &s, Ksiegarnia &k);
///Przeciazony operator wyjscia.
/**Przeciazony operator pozwala na uzyskanie danych na dowlny strumien wyjscia. W tym programie wykorzystywany do wypisu danych na standardowe wyjscie lub do pliku.*/
ostream& operator << (ostream &s, Ksiegarnia &k);
