#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pracownicy
{
	string nazwisko_i_imie;
	string stanowisko;
	float zarobki;

public:
	
	void wyswietlPracownika();
	void wprowadzNazwiskoIImie(string nowe_nazwisko_imie);
	void wprowadzStanowisko(string nowe_stanowisko);
	void wprowadzZarobki(float nowe_zarobki);
	friend ostream&operator<<(ostream&s, Pracownicy &k);

	Pracownicy();
	~Pracownicy();
};
