#pragma once
#include <iostream>
#include <string>
#include "Ksiegarnia.h"

using namespace std;

///Klasa Ksiegarnia Internetowa, pochodna klasy Ksiegarnia
class KsiegarniaInternetowa : public Ksiegarnia
{
	string adres_domeny; ///<zmienna przechowujaca adres domeny Ksiegarni Internetowej
	
public:
	///Konstruktor domyslny
	KsiegarniaInternetowa();
	///Destruktor
	~KsiegarniaInternetowa();
	///Metoda pozwalajaca uzyskac dane na temat Ksiegarni Internetowej.
	/**
	Umozliwia wyprowadzenie danych obiektu na dowolny strumien wyjscia.
	\param s dowolny strumien wyjscia*/
	void wypiszDaneFirmy(ostream &s);
	///Metoda pozwalajaca na wprowadzenie danych Ksiegarni internetowej.
	/**
	Umozliwia wprowadzanie danych obiektu z pliku.
	*/
	void wprowadzDaneFirmyZPliku(istream &s);
	///Metoda pozwalajaca wprowadzic dane Ksiegarni Internetowej.
	/**Metoda pozwala na dodanie adresu domeny Ksiegarni Internetowej.
	\param nowy_adres_domeny adres domeny Ksiegarni Internetowej*/
	void wprowadzDaneKsiegarniInternetowej(string nowy_adres_domeny);
	///Zaprzyjazniony operator strumieniowy
	friend ostream&operator <<(ostream&s, KsiegarniaInternetowa &k);
	///Zaprzyjazniony operator strumieniowy
	friend istream&operator >> (istream&s, KsiegarniaInternetowa &k);
};

///Przeciazony operator wejscia.
/**Przeciazony operator pozwala na pobranie danych z dowolnego strumienia wejscia. W tym programie wykorzystywany do odczytu danych z pliku.*/
istream& operator >> (istream &s, KsiegarniaInternetowa &k);
///Przeciazony operator wyjscia.
/**Przeciazony operator pozwala na uzyskanie danych na dowlny strumien wyjscia. W tym programie wykorzystywany do wypisu danych na standardowe wyjscie lub do pliku.*/
ostream& operator<<(ostream &s, KsiegarniaInternetowa &k);