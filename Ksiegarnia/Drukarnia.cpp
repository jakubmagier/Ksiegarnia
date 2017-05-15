#include <iostream>
#include <string>
#include "Drukarnia.h"

using namespace std;

int Drukarnia::iloscDrukarni = 0;

// Konstruktor domyslny obiektu Drukarnia
Drukarnia::Drukarnia() 
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor domyslny obiektu Drukarnia" << endl;

#endif
	iloscDrukarni++;
	cout << "Drukarnie:" << iloscDrukarni << endl;
}

//Operator strumieniowy
ostream&operator << (ostream &s, Drukarnia &d)
{
	s << "Nazwa drukarni: " << endl;
	s << d.nazwa << endl;
	s << "Siedziba drukarni: " << endl;
	s << d.siedziba;
	s << "Ilosc drukarek: " << endl;
	s << d.ilosc_drukarek << endl;
	return s;
}

//Operator strumieniowy
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
	s << "Drukarnia" << endl;
	wypiszGlowneDaneFirmy(s);
	s << *this;
}

void Drukarnia::wprowadzDaneFirmyZPliku(istream &s)
{
	Przedsiebiorstwo::wprowadzDaneFirmyZPliku(s);
	s >> *this;
}

void Drukarnia::wprowadzDaneDrukarni(string nowa_nazwa, string nowy_adres, int nowa_ilosc_drukarek, int nowy_telefon)
{
	nazwa = nowa_nazwa;
	ilosc_drukarek = nowa_ilosc_drukarek;
	siedziba.ustawDaneSiedziby(nowy_adres, nowy_telefon);
}
