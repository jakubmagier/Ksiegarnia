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

///Operator strumieniowy
ostream&operator << (ostream &s, Przedsiebiorstwo &p)
{
	s << p.wlasciciel;
	return s;
}

///Operator strumieniowy
istream&operator >> (istream &s, Przedsiebiorstwo &p)
{
	s >> p.wlasciciel;
	return s;
}

Przedsiebiorstwo::~Przedsiebiorstwo()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor obiektu Przedsiebiorstwo" << endl;
#endif
	iloscPrzedsiebiorstw--;
}