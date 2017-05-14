#pragma once
#include <iostream>
#include <string>

using namespace std;

///Klasa przechowujaca dane o pracownikach firmy
class Pracownicy
{
	string nazwisko_i_imie; ///<zmienna przechowujaca nazwisko i imie pracownika firmy
	int zarobki; ///<zmienna przechowujaca zarobki pracownika

public:
	///Konstruktor
	Pracownicy();
	///Konstruktor z parametrami
	Pracownicy(string nowe_nazw, float nowe_zarob);
	///Destruktor
	~Pracownicy();
	///Zaprzyjazniony operator strumieniowy
	friend ostream&operator<<(ostream&s, Pracownicy &p);
	
};
///Przeciazony operator wyjscia.
/**Przeciazony operator pozwala na uzyskanie danych na dowolny strumien wyjscia. W tym programie wykorzystywany do wypisu danych na standardowe wyjscie lub do pliku.*/
ostream& operator<<(ostream &s, Pracownicy &p);
