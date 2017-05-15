#include <iostream>
#include <string>
#include "Drukarnia.h"

using namespace std;

int Drukarnia::iloscDrukarni = 0;

/// Konstruktor domyslny obiektu Drukarnia
Drukarnia::Drukarnia() 
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor domyslny obiektu Drukarnia" << endl;

#endif
	nazwa = "Tani druk";
	ilosc_drukarek = 10;
	siedziba.ustawDaneSiedziby("Aleje Jerozolimskie 235", 777888999);
	pracownicy.push_back(Pracownicy());
	iloscDrukarni++;
	cout << "Drukarnie:" << iloscDrukarni << endl;
}

Drukarnia::Drukarnia(int liczba_pracownikow) // Konstruktor z parametrem
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor obiektu Drukarnia" << endl;

#endif
	nazwa = "Tani druk";
	ilosc_drukarek = 10;
	siedziba.ustawDaneSiedziby("Aleje Jerozolimskie 235", 777888999);
	for (int i = 0; i < liczba_pracownikow; i++)
	{
		pracownicy.push_back(Pracownicy());
	}
	iloscDrukarni++;
	cout << "Drukarnie:" << iloscDrukarni << endl;

}

///Operator strumieniowy
ostream&operator << (ostream &s, Drukarnia &d)
{
	s << "Nazwa drukarni: " << endl;
	s << d.nazwa << endl;
	s << "Siedziba drukarni: " << endl;
	s << d.siedziba << endl;
	s << "Ilosc drukarek: " << endl;
	s << d.ilosc_drukarek << endl;
	return s;
}

///Operator strumieniowy
istream&operator >> (istream &s, Drukarnia &d)
{
	string zmienna_pomocnicza;
	s >> zmienna_pomocnicza >> zmienna_pomocnicza;
	s >> d.nazwa;
	s >> zmienna_pomocnicza >> zmienna_pomocnicza;
	s >> d.siedziba;
	s >> zmienna_pomocnicza >> zmienna_pomocnicza;
	s >> d.ilosc_drukarek;
	return s;
}

Drukarnia::~Drukarnia()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor obiektu Drukarnia" << endl;
#endif
	iloscDrukarni--;
	cout << "Drukarnie:" << iloscDrukarni << endl;
}

void Drukarnia::wypiszDaneFirmy(ostream &s)
{
	s << "Drukarnia"<< endl;
	wypiszGlowneDaneFirmy(s);
	s << *this;
}

void Drukarnia::wprowadzDaneFirmyZPliku(istream &s)
{
	Przedsiebiorstwo::wprowadzDaneFirmyZPliku(s);
	s >> *this;
}
