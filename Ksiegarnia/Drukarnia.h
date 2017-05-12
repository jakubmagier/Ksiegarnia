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
	string nazwa; ///<Zmienna przechowujaca nazwe drukarni
	int ilosc_drukarek; ///<Zmienna przechowujaca liczbe drukarek znajdujacych sie w drukarni

public:
	
	static int iloscDrukarni; ///<zmienna przechowujaca ilosc utworzonych obiektow (Drukarni)
	///Kontruktor domyœlny
	Drukarnia();
	///Konstruktor z parametrem
	Drukarnia(int liczba_pracownikow);
	///Destruktor
	~Drukarnia();
	///Metoda pozwalajaca wyswietlic stan drukarni
	void wyswietlStan();
	///Zaprzyjazniony operator strumieniowy
	friend ostream&operator<<(ostream&s, Drukarnia &d);
	///Zaprzyjazniony operator strumieniowy
	friend istream&operator>>(istream&s, Drukarnia &d);

};