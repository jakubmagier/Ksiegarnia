#pragma once
#include <iostream>
#include <string>

using namespace std;

///Klasa przechowujaca dane o siedzibie firmy
class Siedziba
{
	string adres; ///<zmienna przechowujaca adres siedziby firmy
	int nr_telefonu; ///<zmienna przechowujaca numer telefonu do siedziby firmy

public:
	///Metoda pozwalajaca wyswietlic siedzibe firmy
	void Siedziba::wyswietlSiedzibe();
	///Zaprzyjazniony operator strumieniowy
	friend ostream& operator<<(ostream&s, Siedziba &k);
	///Konstruktor domyslny
	Siedziba();
	///Konstruktor z parametrami
	Siedziba(string nowy_adres, int nowy_numer);
	///Destruktor
	~Siedziba();
};

