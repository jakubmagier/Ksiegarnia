#pragma once
#include <iostream>
#include <string>
#include "Ksiegarnia.h"

using namespace std;

///Klasa Ksiegarnia internetowa, pochodna klasy Ksiegarnia
class KsiegarniaInternetowa : public Ksiegarnia
{
	string adres_domeny; ///<zmienna przechowujaca adres domeny ksiegarni internetowej
	string opcje_wysylki; ///<zmienna przechowujaca dostepne w ksiegarni internetowej opcje wysylki
	
public:
	///Konstruktor domyslny
	KsiegarniaInternetowa();
	///Destruktor
	~KsiegarniaInternetowa();
	///Metoda pozwalajaca uzyskac dane na temat Ksiegarni internetowej.
	/**
	Umozliwia wyprowadzenie danych obiektu na dowolny strumien wyjscia.
	\param s dowolny strumien wyjscia*/
	void wypiszDaneFirmy(ostream &s);
	///Metoda pozwalajaca na wprowadzenie danych Ksiegarni internetowej.
	/**
	Umozliwia wprowadzanie danych obiektu z pliku.
	*/
	void wprowadzDaneFirmyZPliku(istream &s);
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