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
	pracownicy.push_back(Pracownicy());
	Siedziba("Aleje Jerozolimskie 235", 777888999);
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
	s << "Nazwa: " <<d.nazwa << "Liczba pracownikow: " << d.pracownicy.size() << "Ilosc drukarek: " << d.ilosc_drukarek;
	s << d.siedziba << endl;
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
	cout << "Siedziba drukarni:" << endl << endl;
	siedziba.wyswietlSiedzibe();
	cout << "Wlasciciel drukarni:" << wlasciciel<< endl;
	cout << "Nazwa drukarni:"<<nazwa<<endl;
	cout << "Podlega pod:" << nazwa_przedsiebiorstwa << endl;
	cout << "Liczba drukarek:" << ilosc_drukarek << endl;
	cout << "Liczba pracownikow:" << pracownicy.size() << endl<<"Pracownicy:"<<endl<<endl; 
for(size_t i = 0; i<pracownicy.size();i++)
{
	cout<<"Pracownik nr "<<i+1<<" : "<<endl;
	cout<<pracownicy[i]<<endl;
}

}
