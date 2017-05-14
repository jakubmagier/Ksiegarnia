#include <iostream>
#include <string>
#include "Ksiegarnia.h"

using namespace std;

int Ksiegarnia::iloscKsiegarni = 0;

///Konstruktor domyslny
Ksiegarnia::Ksiegarnia() 
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor domyslny obiektu Ksiegarnia" << endl;

#endif
	nazwa = "Dobra ksiazka";
	siedziba.ustawDaneSiedziby("Aleja solidarnosci 346", 444555666);
	for (int i = 0; i < 2; i++)   //Domyslnie tworzy 2 pracownikow i 2 ksiazki 
	{
		pracownicy.push_back(Pracownicy());
	}
	for (int i = 0; i < 2; i++)
	{
		ksiazka.push_back(Ksiazka());
	}
	iloscKsiegarni++;
	cout << "Ksiegarnie:" << iloscKsiegarni << endl;

}

///Konstruktor z dwoma parametrami
Ksiegarnia::Ksiegarnia(int liczba_pracownikow, int liczba_ksiazek)
{
#ifdef _DEBUG

	cout<<"Wywolano konstruktor z parametrami obiektu Ksiegarnia"<<endl;

#endif
	nazwa="Dobra ksiazka";
	siedziba.ustawDaneSiedziby("Aleja solidarnosci 346", 444555666);
	for (int i = 0; i < liczba_pracownikow; i++)
	{
		pracownicy.push_back(Pracownicy());
	}
	for (int i = 0; i < liczba_ksiazek; i++)
	{
		ksiazka.push_back(Ksiazka());
	}
	iloscKsiegarni++;
	cout << "Ksiegarnie:" << iloscKsiegarni << endl;
	
}

Ksiegarnia::Ksiegarnia(const Ksiegarnia &ksiegarnia) //konstruktor kopiujacy
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor kopiujacy obiektu Ksiegarnia" << endl;

#endif
	/*nazwa = ksiegarnia.nazwa;
	wlasciciel = ksiegarnia.wlasciciel;
	siedziba = ksiegarnia.siedziba;
	liczba_pracownikow
	if (pracownicy.size() != 0)
	{
		for (int i = 0; i < liczba_pracownikow; i++)
		{
			pracownicy[i] = ksiegarnia.pracownicy[i];
		}
	}
	else
	{
		pracownicy = nullptr;
	}

	if (ksiegarnia.ksiazka != nullptr)
	{
		ksiazka = new Ksiazka[liczba_ksiazek];
		for (int i = 0; i < liczba_ksiazek; i++)
		{
			ksiazka[i] = ksiegarnia.ksiazka[i];
		}
	} 
	else
	{
		ksiazka=nullptr;
	}*/
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
void Ksiegarnia::wyswietlLiczbePracownikow()
{
	cout<<pracownicy.size()<<endl;
}

void Ksiegarnia::wyswietlLiczbeKsiazek()
{
	cout<<ksiazka.size()<<endl;
}

void Ksiegarnia::wypiszDaneFirmy(ostream &s)
{
	wypiszGlowneDaneFirmy(s);
	s << *this;
}

void Ksiegarnia::dodajKsiazke()
{
	cout << "Tytul:" << endl;
	string nowy_tytul;
	cin >> nowy_tytul;
	cout << "Autor:" << endl;
	string nowy_autor;
	cin >> nowy_autor;
	cout << "Rok wydania:" << endl;
	int nowy_rok_wydania;
	cin >> nowy_rok_wydania;
	ksiazka.push_back(Ksiazka(nowy_tytul, nowy_autor, nowy_rok_wydania));
}

void Ksiegarnia::usunKsiazke()
{
	cout << "Numer ksiazki:" << endl;
	int nr;
	cin >> nr;
	ksiazka.erase(ksiazka.begin()+nr-1);
}
//===========================OPERATORY==============================

bool Ksiegarnia::operator==(const Ksiegarnia &k) //sprawdzenie czy w obu ksiegarniach jest tyle samo pracownikow
{
	if (k.pracownicy.size() == pracownicy.size())
		return true;
	else
		return false;
}

bool Ksiegarnia::operator>(const Ksiegarnia &k) //czy ilosc ksiazek w 2 ksiegarni jest wieksza niz w 1
{
	if (k.ksiazka.size() > ksiazka.size())
		return true;
	else
		return false;
}

bool Ksiegarnia::operator<(const Ksiegarnia &k) //czy w pierwszej ksiegarni pracuje wiecej osob niz w drugiej
{
	if (k.pracownicy.size() < pracownicy.size())
		return true;
	else
		return false;
}


ostream& operator<<(ostream&s, Ksiegarnia &k) //operator strumieniowy
{
	s << "Nazwa ksiegarni: "<< endl;
	s << k.nazwa << endl;
	s << "Siedziba ksiegarni: " << endl;
	s << k.siedziba<<endl;
	if (k.ksiazka.size() > 0)
	{	
		for (size_t i = 0; i < k.ksiazka.size(); i++)
		{
			s << k.ksiazka[i] << endl;
		}
	}else
		s << "Brak ksiazek" << endl;
	return s;
}

Pracownicy& Ksiegarnia::operator[](unsigned int i) //operator indeksowania - zwraca obiekt Pracownicy o podanym nr
{
	if (i < pracownicy.size())
	{
		return pracownicy[i];
	}
}

Ksiegarnia::operator int() //operator konwertujacy
{
	return ksiazka.size();
}







