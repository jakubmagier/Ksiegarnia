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
	nazwa = "Przedsiebiorstwo handlowo - uslugowe 'Zeus'";
	wlasciciel = "Jan Kowalski";
	iloscPrzedsiebiorstw++;
}

void Przedsiebiorstwo::dodajPracownika()
{
	cout << "Nazwisko:" << endl;
	string nowe_nazwisko;
	cin >> nowe_nazwisko;
	cout << "Zarobki:" << endl;
	float nowe_zarobki;
	cin >> nowe_zarobki;
	pracownicy.push_back(Pracownicy(nowe_nazwisko, nowe_zarobki));
}

void Przedsiebiorstwo::usunPracownika()
{
	cout << "Numer pracownika:" << endl;
	int nr;
	cin >> nr;
	pracownicy.erase(pracownicy.begin() + nr - 1);
}

///Operator strumieniowy
ostream&operator << (ostream &s, Przedsiebiorstwo &p)
{
	s << p.nazwa;
	s << p.wlasciciel;
	for (int i = 0; i < p.pracownicy.size(); i++)
	{
		s << p.pracownicy[i] << endl;
	}
	return s;
}

///Operator strumieniowy
istream&operator >> (istream &s, Przedsiebiorstwo &p)
{
	s >> p.nazwa;
	s >> p.wlasciciel;
	for (int i = 0; i < p.pracownicy.size(); i++)
	{
		s >> p.pracownicy[i];
	}
	return s;
}

Przedsiebiorstwo::~Przedsiebiorstwo()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor obiektu Przedsiebiorstwo" << endl;
#endif
	iloscPrzedsiebiorstw--;
}