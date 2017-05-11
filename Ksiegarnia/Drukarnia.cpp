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
	nazwisko_pracownika.push_back("Andrzej Nowak");
	zarobki_pracownika.push_back(2890);
	nazwa = "Tani druk";
	ilosæ_drukarek = 10;
	iloscDrukarni++;
	cout << "Drukarnie:" << iloscDrukarni << endl;
}

///Operator strumieniowy
ostream&operator << (ostream &s, Drukarnia &d)
{
	s << d.nazwa;
	return s;
}

///Operator strumieniowy
istream&operator >> (istream &s, Drukarnia &d)
{
	s >> d.nazwa;
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

void Drukarnia::wyswietlStan()
{
cout<<"Nazwa drukarni:"<<nazwa<<endl;
cout << "Liczba drukarek:" << ilosæ_drukarek << endl;
cout << "Liczba pracownikow:" << nazwisko_pracownika.size() << endl;
for (int i = 0; i< nazwisko_pracownika.size(); i++)
{
cout << "Nazwisko pracownika: " << nazwisko_pracownika[i] << endl;
}
}

/*void Drukarnia::dodajPracownika()
{

}
*/