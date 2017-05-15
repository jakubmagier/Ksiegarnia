#include <iostream>
#include <string>
#include "Ksiazka.h"

using namespace std;

Ksiazka::Ksiazka()
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor obiektu Ksiazka" << endl;

#endif
}

Ksiazka::Ksiazka(string nowy_tytul, string nowy_autor, int nowy_rok_wydania)
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor z parametrami obiektu Ksiazka" << endl;

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

