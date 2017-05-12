#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Przedsiebiorstwo.h"
#include "Pracownicy.h"

using namespace std;

///Klasa Drukarnia, pochodna klasy Przedsiebiorstwo
class Drukarnia: public Przedsiebiorstwo
{
	string nazwa; ///<Zmienna przechowujaca nazwe drukarni
	int ilos�_drukarek; ///<Zmienna przechowujaca liczbe drukarek znajdujacych sie w drukarni

public:
	
	static int iloscDrukarni;
	///Kontruktor domy�lny
	Drukarnia();
	///Konstruktor z parametrem
	Drukarnia(int liczba_pracownikow);
	///Destruktor
	~Drukarnia();
	void wyswietlStan();
	//void dodajPracownika();
	friend ostream&operator<<(ostream&s, Drukarnia &d);
	friend istream&operator>>(istream&s, Drukarnia &d);

};