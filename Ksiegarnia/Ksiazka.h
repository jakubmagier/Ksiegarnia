#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ksiazka
{
	string tytul;
	string autor;
	int rok_wydania;

public:
	
	void wyswietlKsiazke();
	void wprowadzTytul(string nowy_tytul);
	void wprowadzAutora(string nowy_autor);
	void wprowadzRokWydania(int nowy_rok);
	friend ostream& operator<<(ostream&s, Ksiazka &k);

	Ksiazka();
	Ksiazka(string nowy_tytul, string nowy_autor, int nowy_rok_wydania);
	~Ksiazka();
};