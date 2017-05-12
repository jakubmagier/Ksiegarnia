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
	///Metoda pozwalajaca wyswietlic dane pracownika
	void wyswietlPracownika();
	///Zaprzyjazniony operator strumieniowy
	friend ostream&operator<<(ostream&s, Pracownicy &k);
	///Zaprzyjazniony operator strumieniowy
	friend istream&operator >> (istream&s, Pracownicy &k);
	///Konstruktor
	Pracownicy();
	///Konstruktor z parametrami
	Pracownicy(string nowe_nazw, float nowe_zarob);
	///Destruktor
	~Pracownicy();
};