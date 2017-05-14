#include <iostream>
#include <string>
#include "Ksiazka.h"

using namespace std;

Ksiazka::Ksiazka()
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor obiektu Ksiazka" << endl;

#endif
	tytul="Symfonia C++";
	autor="Jerzy Grebosz";        //domyslne wartosci
	rok_wydania=2008;
}

Ksiazka::Ksiazka(string nowy_tytul, string nowy_autor, int nowy_rok_wydania)
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor z atrybutami obiektu Ksiazka" << endl;

#endif
	tytul = nowy_tytul;
	autor = nowy_autor;      
	rok_wydania = nowy_rok_wydania;
}

Ksiazka::~Ksiazka()
{
#ifdef _DEBUG

	cout << "Wywolano destruktor obiektu Ksiazka" << endl;

#endif
}

//===========================OPERATORY==============================

ostream&operator<<(ostream&s, Ksiazka &k) //operator strumieniowy
{
	s << "Tytul: " << endl;
	s << k.tytul << endl;
	s << "Autor: " << endl;
	s << k.autor << endl;
	s << "Rok wydania: " << endl;
	s << k.rok_wydania << endl;
	return s;
}

istream&operator>>(istream&s, Ksiazka &k) //operator strumieniowy
{
	s >> k.tytul;
	s >> k.autor;
	s >> k.rok_wydania;
	return s;
}

