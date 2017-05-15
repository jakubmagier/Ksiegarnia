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
protected:

	string nazwa; ///<zmienna przechowuj¹ca nazwe ksiegarni
	vector<Ksiazka>ksiazka; ///<kontener zawierajacy dane ksiazek znajdujacych sie w ksiegarni

public:

	static int iloscKsiegarni; ///<zmienna przechowujaca ilosc utworzonych obiektow (Ksiegarni)
	Ksiegarnia(); //domyslny konstruktor
	Ksiegarnia(int liczba_pracownikow, int liczba_ksiazek); //konstruktor z parametrami
	~Ksiegarnia(); //destruktor
	Ksiegarnia(const Ksiegarnia &ksiegarnia); //konstruktor kopiujacy
	///Metoda pozwalajaca wyswietlic liczbe pracownikow ksiegarni
	void wyswietlLiczbePracownikow();
	///Metoda pozwalajaca wyswietlic liczbe ksiazek w ksiegarni
	void wyswietlLiczbeKsiazek();
	///Metoda pozwalajaca dodac ksiazke do ksiegarni.
	/**Metoda pozwala na dodanie ksiazki o podanej nazwie, nazwisku autora i roku wydania.
	\param tytul nazwa ksiazki ktora chcemy dodac do ksiegarni
	\param autor nazwisko autora ksiazki ktora dodajemy
	\param rok_wydania rok wydania ksiazki ktora dodajemy*/
	void dodajKsiazke(string tytul, string autor, int rok_wydania);
	///Metoda pozwalajaca usunac ksiazke z ksiegarni.
	/**Metoda pozwala na usuniecie ksiazki o wybranym numerze.
	\param ktora numer ksiazki ktora chcemy usunac z ksiegarni*/
	void usunKsiazke(int ktora);
	///Metoda pozwalajaca uzyskac dane na temat Ksiegarni.
	/**
	Umozliwia wyprowadzenie danych obiektu na dowolny strumien wyjscia.
	\param s dowolny strumien wyjscia*/
	void wypiszDaneFirmy(ostream &s);
	///Metoda pozwalajaca na wprowadzenie danych Ksiegarni.
	/**
	Umozliwia wprowadzanie danych obiektu z pliku.
	*/
	void wprowadzDaneFirmyZPliku(istream &s);
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
	Pracownicy& Ksiegarnia::operator[](unsigned int i);/////////////////////////////??????
	operator int();										/////////////////////////////?????
	Ksiegarnia& Ksiegarnia::operator=(const Ksiegarnia &k);
	///Zaprzyjazniony operator strumieniowy
	friend istream&operator>>(istream&s, Ksiegarnia &k);
	///Zaprzyjazniony operator strumieniowy
	friend ostream&operator<<(ostream&s, Ksiegarnia &k);
	
};

///Przeciazony operator wejscia.
/**Przeciazony operator pozwala na pobranie danych z dowolnego strumienia wejscia. W tym programie wykorzystywany do odczytu danych z pliku.*/
istream& operator >> (istream &s, Ksiegarnia &k);
///Przeciazony operator wyjscia.
/**Przeciazony operator pozwala na uzyskanie danych na dowlny strumien wyjscia. W tym programie wykorzystywany do wypisu danych na standardowe wyjscie lub do pliku.*/
ostream& operator<<(ostream &s, Ksiegarnia &k);
