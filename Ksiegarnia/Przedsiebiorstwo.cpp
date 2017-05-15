#include <iostream>
#include <string>
#include <fstream>
#include "Przedsiebiorstwo.h"

using namespace std;

int Przedsiebiorstwo::iloscPrzedsiebiorstw = 0;

Przedsiebiorstwo::Przedsiebiorstwo() 
{
#ifdef _DEBUG  
	cout << "Wywolano konstruktor domyslny obiektu Przedsiebiorstwo" << endl;
#endif
	nazwa_przedsiebiorstwa = "JakuMa";
	wlasciciel = "JakubMagier";
	iloscPrzedsiebiorstw++;
}

void Przedsiebiorstwo::dodajPracownika(string nazwisko, float zarobki)
{
	string nowe_nazwisko;
	nowe_nazwisko = nazwisko;
	float nowe_zarobki;
	nowe_zarobki = zarobki;
	pracownicy.push_back(Pracownicy(nowe_nazwisko, nowe_zarobki));
}

void Przedsiebiorstwo::usunPracownika(int ktory)
{
	int nr;
	nr = ktory;
	pracownicy.erase(pracownicy.begin() + nr - 1);
}

void Przedsiebiorstwo::wypiszGlowneDaneFirmy(ostream &s)
{
	s << *this;
}

void Przedsiebiorstwo::wprowadzDaneFirmyZPliku(istream &s)
{
	s >> *this;
}

///Operator strumieniowy
ostream&operator << (ostream &s, Przedsiebiorstwo &p)
{
	s << "Nazwa przedsiebiorstwa:" <<endl;
	s << p.nazwa_przedsiebiorstwa <<endl;
	s << "Wlasciciel:" << endl;
	s << p.wlasciciel << endl;
	s << "Liczba pracownikow: " << endl;
	s << p.pracownicy.size() << endl;
	s << "Pracownicy: " << endl;
	if (p.pracownicy.size() > 0)
	{
		for (size_t i = 0; i < p.pracownicy.size(); i++)
		{
			s << "Pracownik nr"<<i+1<<":"<<endl;
			s << p.pracownicy[i];
		}
	}
	else 
		s << "Brak pracownikow" << endl;
	return s;
}

///Operator strumieniowy
istream&operator >> (istream &s, Przedsiebiorstwo &p)
{
	string zmienna_pomocnicza, nazwisko;
	int liczba_pracownikow, zarobki;
	s >> zmienna_pomocnicza >> zmienna_pomocnicza;
	s >> p.nazwa_przedsiebiorstwa;
	s >> zmienna_pomocnicza;
	s >> p.wlasciciel;
	s >> zmienna_pomocnicza >> zmienna_pomocnicza;
	s >> liczba_pracownikow;
	s >> zmienna_pomocnicza;
	if (liczba_pracownikow > 0)
	{
		for (int i = 0; i < liczba_pracownikow; i++)
		{
			s >> zmienna_pomocnicza >> zmienna_pomocnicza;
			s >> zmienna_pomocnicza >> zmienna_pomocnicza >> zmienna_pomocnicza;
			s >> nazwisko;
			s >> zmienna_pomocnicza;
			s >> zarobki;
			p.dodajPracownika(nazwisko, zarobki);
		}
	}
	else
		s >> zmienna_pomocnicza >> zmienna_pomocnicza;
	return s;
}

Przedsiebiorstwo::~Przedsiebiorstwo()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor obiektu Przedsiebiorstwo" << endl;
#endif
	iloscPrzedsiebiorstw--;
}