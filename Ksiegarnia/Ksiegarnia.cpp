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
	wlasciciel = "Jan Nowak";
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

	cout<<"Wywolano konstruktor obiektu Ksiegarnia"<<endl;

#endif
	nazwa="Dobra ksiazka";
	wlasciciel="Jan Nowak"; 
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

Ksiegarnia::Ksiegarnia(string dodaj_nazwe, string dodaj_wlasciciela, int ile_pracownikow, int ile_ksiazek, string dodaj_adres, int dodaj_nr_telefonu, int dodaj_liczba_pomieszczen)
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor obiektu Ksiegarnia" << endl;

#endif
	nazwa = dodaj_nazwe;
	wlasciciel = dodaj_wlasciciela;
	siedziba.dodajSiedzibe(dodaj_adres, dodaj_nr_telefonu, dodaj_liczba_pomieszczen);
	for (int i = 0; i < ile_pracownikow; i++)
	{
		pracownicy.push_back(Pracownicy());
	}
	for (int i = 0; i < ile_ksiazek; i++)
	{
		ksiazka.push_back(Ksiazka());
		iloscKsiegarni++;
		cout << "Ksiegarnie:" << iloscKsiegarni << endl;

	}

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
void Ksiegarnia::wyswietlStan()
{
	cout<<"Siedziba ksiegarni:"<<endl<<endl;
	siedziba.wyswietlSiedzibe();

	if (pracownicy.size() > 0)
	{
		cout<<"Pracownicy ksiegarni:"<<endl<<endl;
		for (int i = 0; i < pracownicy.size(); i++)
		{
			cout<<i+1<<":"<<endl;
			pracownicy[i].wyswietlPracownika();
		}
	}
	else
	cout << "Brak pracownikow" << endl;

	if (ksiazka.size() > 0)
	{
		cout << "Ksiazki w ksiegarni:" << endl << endl;
		for (int i = 0; i < ksiazka.size(); i++)
		{
			cout << i + 1 << ":" << endl;
			ksiazka[i].wyswietlKsiazke();
		}
	}
	else
		cout << "Brak ksiazek" << endl;
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
	liczba_ksiazek++;
}

void Ksiegarnia::usunKsiazke()
{
	cout << "Numer ksiazki:" << endl;
	int nr;
	cin >> nr;
	ksiazka.erase(ksiazka.begin()+nr-1);
	liczba_ksiazek--;
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

Ksiegarnia& Ksiegarnia::operator=(const Ksiegarnia &k) //przypisanie jednej ksiegarni parameterow drugiej
{
if(&k != this)  //zabezpieczenie przed przypisaniem samego siebie
{
	wlasciciel = k.wlasciciel;
	nazwa = k.nazwa;
	//liczba_pracownikow = k.liczba_pracownikow;
	liczba_ksiazek = k.liczba_ksiazek;
	siedziba = k.siedziba;

	/*if (pracownicy != nullptr)
		delete[] pracownicy;
	pracownicy = new Pracownicy [liczba_pracownikow];

	for (int i = 0; i < liczba_pracownikow; i++)
	{
		pracownicy[i] = k.pracownicy[i];
	}
	
	if (ksiazka != nullptr)
		delete[] ksiazka;
	ksiazka = new Ksiazka[liczba_ksiazek];

	for (int i = 0; i < liczba_ksiazek; i++)
	{
		ksiazka[i] = k.ksiazka[i];
	}*/
}
	return *this;
}


ostream& operator<<(ostream&s, Ksiegarnia &k) //operator strumieniowy
{
	s << "Nazwa: "<< k.nazwa << endl << "Wlasciciel: "<< k.wlasciciel << endl << "Liczba pracownikow: "<< k.pracownicy.size() << endl << "Liczba ksiazek: "<< k.liczba_ksiazek << endl;
	s << k.siedziba<<endl;

	for (int i = 0; i < k.ksiazka.size(); i++)
	{
		s << k.ksiazka[i] << endl;
	}
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







