#include <iostream>
#include <string>
#include "Ksiegarnia.h"

using namespace std;

int Ksiegarnia::iloscKsiegarni = 0;

//Konstruktor domyslny
Ksiegarnia::Ksiegarnia() 
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor domyslny obiektu Ksiegarnia" << endl;

#endif
	iloscKsiegarni++;
	cout << "Ksiegarnie:" << iloscKsiegarni << endl;

}

Ksiegarnia::~Ksiegarnia()
{
#ifdef _DEBUG

	cout << "Wywolano destruktor obiektu Ksiegarnia" << endl;

#endif
	iloscKsiegarni--;
	cout<<"Ksiegarnie:"<<iloscKsiegarni<<endl;
}

//===========================METODY==============================
void Ksiegarnia::wypiszDaneFirmy(ostream &s)
{
	wypiszGlowneDaneFirmy(s);
	s << *this;
}

void Ksiegarnia::dodajKsiazke(string tytul, string autor, int rok_wydania)
{
	string nowy_tytul;
	nowy_tytul = tytul;
	string nowy_autor;
	nowy_autor = autor;
	int nowy_rok_wydania;
	nowy_rok_wydania = rok_wydania;
	ksiazka.push_back(Ksiazka(nowy_tytul, nowy_autor, nowy_rok_wydania));
}

void Ksiegarnia::usunKsiazke(int ktora)
{
	int nr;
	nr = ktora;
	ksiazka.erase(ksiazka.begin()+nr-1);
}

void Ksiegarnia::wprowadzDaneFirmyZPliku(istream &s)
{
	Przedsiebiorstwo::wprowadzDaneFirmyZPliku(s);
	s >> *this;
}
void Ksiegarnia::wprowadzDaneKsiegarni(string nowa_nazwa, string nowy_adres, int nowy_telefon)
{
	nazwa = nowa_nazwa;
	siedziba.ustawDaneSiedziby(nowy_adres, nowy_telefon);
}
//===========================OPERATORY==============================

ostream& operator<<(ostream&s, Ksiegarnia &k) //operator strumieniowy
{
	s << "Nazwa ksiegarni: "<< endl;
	s << k.nazwa << endl;
	s << "Siedziba ksiegarni: " << endl;
	s << k.siedziba;
	s << "Liczba ksiazek: " << endl;
	s << k.ksiazka.size() << endl;
	s << "Ksiazki: " << endl;
	if (k.ksiazka.size() > 0)
	{	
		for (size_t i = 0; i < k.ksiazka.size(); i++)
		{	
			s << "Ksiazka nr" << i + 1 << ":" << endl;
			s << k.ksiazka[i];
		}
	}else
		s << "Brak ksiazek" << endl;
	return s;
}

istream& operator >> (istream&s, Ksiegarnia &k) //operator strumieniowy
{
	string zmienna_pomocnicza, nazwisko, tytul;
	float rok;
	int liczba_ksiazek;
	s >> zmienna_pomocnicza >>zmienna_pomocnicza;
	s >> k.nazwa;
	s >> zmienna_pomocnicza >> zmienna_pomocnicza;
	s >> k.siedziba;
	s >> zmienna_pomocnicza >> zmienna_pomocnicza;
	s >> liczba_ksiazek;

	s >> zmienna_pomocnicza;
	if (liczba_ksiazek > 0)
	{
		for (size_t i = 0; i < liczba_ksiazek; i++)
		{
			s >> zmienna_pomocnicza >> zmienna_pomocnicza;
			s >> zmienna_pomocnicza;
			s >> tytul;
			s >> zmienna_pomocnicza;
			s >> nazwisko;
			s >> zmienna_pomocnicza >> zmienna_pomocnicza;
			s >> rok;
			k.dodajKsiazke(tytul, nazwisko, rok);
		}
	}
	else
		s >> zmienna_pomocnicza >> zmienna_pomocnicza;
	return s;
}






