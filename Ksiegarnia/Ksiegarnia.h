#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Ksiazka.h"
#include "Pracownicy.h"
#include "Siedziba.h"
#include "Przedsiebiorstwo.h"

using namespace std;

///Klasa Ksiegarnia, pochodna klasy Przedsiebiorstwo
class Ksiegarnia: public Przedsiebiorstwo
{
	string nazwa; ///<zmienna przechowuj¹ca nazwe ksiegarni
	vector<Ksiazka>ksiazka; ///<kontener zawierajacy dane ksiazek znajdujacych sie w ksiegarni

public:

	static int iloscKsiegarni; ///<zmienna przechowujaca ilosc utworzonych obiektow (Ksiegarni)
	Ksiegarnia(); //domyslny konstruktor
	Ksiegarnia(int liczba_pracownikow, int liczba_ksiazek); //konstruktor z dwoma parametrami
	Ksiegarnia(string dodaj_nazwe, string dodaj_wlasciciela, int ile_pracownikow, int ile_ksiazek, string dodaj_adres, int dodaj_nr_telefonu); //konstruktor z szescioma parametrami
	~Ksiegarnia(); //destruktor
	Ksiegarnia(const Ksiegarnia &ksiegarnia); //konstruktor kopiujacy
	///Metoda pozwalajaca wyswietlic stan ksiegarni
	void wyswietlStan();  
	///Metoda pozwalajaca wyswietlic liczbe pracownikow ksiegarni
	void wyswietlLiczbePracownikow();
	///Metoda pozwalajaca wyswietlic liczbe ksiazek w ksiegarni
	void wyswietlLiczbeKsiazek();
	///Metoda pozwalajaca dodac nowa ksiazke do ksiegarni
	void dodajKsiazke();
	///Metoda pozwalajaca usunac wybrana ksiazke z ksiegarni
	void usunKsiazke();
	///Operator porownania
	/**Operator zwraca informacje czy liczba pracownikow w jednej ksiegarnii jest taka sama jak w innej.
	\return informacja o rownosci liczby pracownikow dwoch ksiegarni*/
	bool operator==(const Ksiegarnia &k);
	///Operator porownania
	/**Operator zwraca informacje czy liczba ksiazek w 2 ksiegarni jest wieksza niz w 1.
	\return informacja o tym w ktorej ksiegarni jest wiecej ksiazek*/
	bool operator>(const Ksiegarnia &k);
	///Operator porownania
	/**Operator zwraca informacje czy liczba pracownikow w 1 ksiegarni jest wieksza niz w 2.
	\return informacja o tym w ktorej ksiegarni jest wiecej pracownikow*/
	bool operator<(const Ksiegarnia &k);
Pracownicy& Ksiegarnia::operator[](unsigned int i);/////////////////////////////////////////////////////////////////////////////
	operator int();										///////////////////////////////////////////////////?????
	Ksiegarnia& Ksiegarnia::operator=(const Ksiegarnia &k);
	///Zaprzyjazniony operator strumieniowy
	friend ostream&operator<<(ostream&s, Ksiegarnia &k);
	
};


