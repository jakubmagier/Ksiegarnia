#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Przedsiebiorstwo.h"

using namespace std;

///Klasa Drukarnia, pochodna klasy Przedsiebiorstwo
class Drukarnia: private Przedsiebiorstwo
{
	vector<string>nazwisko_pracownika;
	vector<float>zarobki_pracownika;
	string nazwa; ///<Zmienna przechowujaca nazwe drukarni
	int ilosæ_drukarek; ///<Zmienna przechowujaca liczbe drukarek znajdujacych sie w drukarni

public:
	
	static int iloscDrukarni;
	///Kontruktor domyœlny
	Drukarnia();
	///Destruktor
	~Drukarnia();
	void wyswietlStan();
	//void dodajPracownika();
	friend ostream&operator<<(ostream&s, Drukarnia &d);
	friend istream&operator>>(istream&s, Drukarnia &d);

};