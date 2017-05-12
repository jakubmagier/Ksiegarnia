#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Ksiazka.h"
#include "Pracownicy.h"
#include "Siedziba.h"
#include "Przedsiebiorstwo.h"


using namespace std;

class Ksiegarnia: public Przedsiebiorstwo
{
	Siedziba siedziba;
	vector<Ksiazka>ksiazka;
	string nazwa;
	string wlasciciel;	
	int liczba_ksiazek, liczba_pracownikow;

public:

	static int iloscKsiegarni;
	Ksiegarnia(); //domyslny konstruktor
	Ksiegarnia(int liczba_pracownikow, int liczba_ksiazek); //konstruktor z parametrami
	Ksiegarnia(string dodaj_nazwe, string dodaj_wlasciciela, int ile_pracownikow, int ile_ksiazek, string dodaj_adres, int dodaj_nr_telefonu, int dodaj_liczba_pomieszczen);
	~Ksiegarnia(); //destruktor
	Ksiegarnia(const Ksiegarnia &ksiegarnia); //konstruktor kopiujacy
	void wyswietlStan();
	void Ksiegarnia::wyswietlLiczbePracownikow();
	void Ksiegarnia::wyswietlLiczbeKsiazek();
	void Ksiegarnia::dodajKsiazke();
	void Ksiegarnia::usunKsiazke();

	bool operator==(const Ksiegarnia &k);
	bool operator>(const Ksiegarnia &k);
	bool operator<(const Ksiegarnia &k);
	Ksiegarnia& Ksiegarnia::operator=(const Ksiegarnia &k);
	Ksiegarnia& Ksiegarnia::operator+=(const Ksiegarnia &k);
	Ksiegarnia& Ksiegarnia::operator++(int);
	Ksiegarnia& Ksiegarnia::operator--(int);
	friend ostream&operator<<(ostream&s, Ksiegarnia &k);
	Pracownicy& Ksiegarnia::operator[](unsigned int i);
	operator int();
};


