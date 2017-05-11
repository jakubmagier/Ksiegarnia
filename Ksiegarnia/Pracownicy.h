#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pracownicy
{
	string nazwisko_i_imie;
	float zarobki;

public:
	
	void wyswietlPracownika();
	friend ostream&operator<<(ostream&s, Pracownicy &k);

	Pracownicy();
	Pracownicy(string nowe_nazw, float nowe_zarob);
	~Pracownicy();
};