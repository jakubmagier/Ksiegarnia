#pragma once
#include <iostream>
#include <string>
#include "Ksiazka.h"
#include "Pracownicy.h"
#include "Siedziba.h"
#include "Przedsiebiorstwo.h"

using namespace std;

class Ksiegarnia: public Przedsiebiorstwo
{
	Siedziba siedziba;
	Ksiazka* ksiazka;
	Pracownicy* pracownicy;

	string nazwa;
	string wlasciciel;	
	int liczba_ksiazek, liczba_pracownikow;

public:

	//static int iloscObiektow;
	Ksiegarnia(); //konstruktor
	Ksiegarnia::Ksiegarnia(string dodaj_nazwe, string dodaj_wlasciciela, int ile_pracownikow, int ile_ksiazek, string dodaj_adres, int dodaj_nr_telefonu, int dodaj_liczba_pomieszczen);
	~Ksiegarnia(); //destruktor
	Ksiegarnia(const Ksiegarnia &ksiegarnia); //konstruktor kopiujacy
	void wyswietlStan();
	void Ksiegarnia::wyswietlLiczbePracownikow();
	void Ksiegarnia::wyswietlLiczbeKsiazek();
	void dodajKsiazke(string nowy_tytul, string nowy_autor, int nowy_rok);
	//void dodajPracownika(string nowe_nazwisko_imie, string nowe_stanowisko, float nowe_zarobki);
	
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


