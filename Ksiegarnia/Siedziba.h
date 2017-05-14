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
	void Siedziba::wypiszSiedzibe(ostream&s);
	///Zaprzyjazniony operator strumieniowy
	friend ostream& operator<<(ostream&s, Siedziba &sb);
	///Konstruktor domyslny
	Siedziba();
	///Metoda pozwalajaca ustawic dane Siedziby
	void ustawDaneSiedziby(string nowy_adres, int nowy_numer);
	///Destruktor
	~Siedziba();
};

///Przeciazony operator wejscia.
/**Przeciazony operator pozwala na pobranie danych z dowolnego strumienia wejscia. W tym programie wykorzystywany do odczytu danych z pliku.*/
istream& operator >> (istream &s, Siedziba &sb);
///Przeciazony operator wyjscia.
/**Przeciazony operator pozwala na uzyskanie danych na dowlny strumien wyjscia. W tym programie wykorzystywany do wypisu danych na standardowe wyjscie lub do pliku.*/
ostream& operator<<(ostream &s, Siedziba &sb);