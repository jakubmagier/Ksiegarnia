#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Przedsiebiorstwo.h"
#include "Pracownicy.h"
#include "Siedziba.h"

using namespace std;

///Klasa Drukarnia, pochodna klasy Przedsiebiorstwo
class Drukarnia: public Przedsiebiorstwo
{
protected:
	string nazwa; ///<Zmienna przechowujaca nazwe drukarni
	int ilosc_drukarek; ///<Zmienna przechowujaca liczbe drukarek znajdujacych sie w drukarni

public:	
	static int iloscDrukarni; ///<zmienna przechowujaca ilosc utworzonych obiektow (Drukarni)
	///Kontruktor domyslny
	Drukarnia();
	///Destruktor
	~Drukarnia();
	///Metoda pozwalajaca uzyskac dane na temat Drukarni.
	/**
	Umozliwia wyprowadzenie danych obiektu na dowolny strumien wyjscia.
	\param s dowolny strumien wyjscia*/
	void wypiszDaneFirmy(ostream &s);
	///Metoda pozwalajaca na wprowadzenie danych Drukarni.
	/**
	Umozliwia wprowadzanie danych obiektu z pliku.
	\param s strumien wejscia*/
	void wprowadzDaneFirmyZPliku(istream &s);
	///Metoda pozwalajaca wprowadzic dane drukarni.
	/**Metoda pozwala na dodanie nazwy, adresu, ilosci drukarek i nr telefonu drukarni.
	\param nowa_nazwa nazwa drukarni
	\param nowy_adres adres drukarni
	\param nowa_ilosc_drukarek ilosc drukarek w drukarni
	\param nowy_telefon telefon do drukarni*/
	void wprowadzDaneDrukarni(string nowa_nazwa, string nowy_adres, int nowa_ilosc_drukarek, int nowy_telefon);
	///Zaprzyjazniony operator strumieniowy
	friend ostream&operator<<(ostream&s, Drukarnia &d);
	///Zaprzyjazniony operator strumieniowy
	friend istream&operator>>(istream&s, Drukarnia &d);

};

///Przeciazony operator wejscia.
/**Przeciazony operator pozwala na pobranie danych z dowolnego strumienia wejscia. W tym programie wykorzystywany do odczytu danych z pliku.*/
istream& operator >> (istream &s, Drukarnia &d);
///Przeciazony operator wyjscia.
/**Przeciazony operator pozwala na uzyskanie danych na dowlny strumien wyjscia. W tym programie wykorzystywany do wypisu danych na standardowe wyjscie lub do pliku.*/
ostream& operator<<(ostream &s, Drukarnia &d);