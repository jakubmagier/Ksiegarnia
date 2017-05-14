#pragma once
#include <iostream>
#include <string>

using namespace std;

///Klasa przechowujaca dane o ksiazkach znajdujacych sie w ksiegarni
class Ksiazka
{
	string tytul; ///<zmienna przechowujaca tytul ksiazki
	string autor; ///<zmienna przechowujaca nazwisko i imie autora ksiazki
	int rok_wydania; ///<zmienna przechowujaca rok wydania ksiazki

public:
	///Konstruktor domyslny
	Ksiazka();
	///Konstruktor z parametrami
	Ksiazka(string nowy_tytul, string nowy_autor, int nowy_rok_wydania);
	///Destruktor
	~Ksiazka();
	///Zaprzyjazniony operator strumieniowy
	friend ostream& operator<<(ostream&s, Ksiazka &k);
	///Zaprzyjazniony operator strumieniowy
	friend istream& operator >> (istream&s, Ksiazka &k);
	
};

///Przeciazony operator wyjscia.
/**Przeciazony operator pozwala na uzyskanie danych na dowolny strumien wyjscia. W tym programie wykorzystywany do wypisu danych na standardowe wyjscie lub do pliku.*/
ostream& operator<<(ostream &s, Ksiazka &k);