#include <iostream>
#include <string>
#include "Ksiegarnia.h"

using namespace std;

int Ksiegarnia::iloscObiektow = 0;

Ksiegarnia::Ksiegarnia() // Konstruktor domyslny
{
#ifdef _DEBUG

	cout<<"Wywolano konstruktor domyslny obiektu Ksiegarnia"<<endl;

#endif
	nazwa="Dobra ksiazka";
	wlasciciel="Jan Nowak";
	liczba_pracownikow=2;
	liczba_ksiazek=1;
	pracownicy=new Pracownicy[liczba_pracownikow];
	ksiazka=new Ksiazka[liczba_ksiazek];
	iloscObiektow++;
	cout << "Obiekty:" << iloscObiektow << endl;
	
}

//konstruktor z parametrami
Ksiegarnia::Ksiegarnia(string dodaj_nazwe, string dodaj_wlasciciela, int ile_pracownikow, int ile_ksiazek, string dodaj_adres, int dodaj_nr_telefonu, int dodaj_liczba_pomieszczen)
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor obiektu Ksiegarnia" << endl;

#endif
	nazwa = dodaj_nazwe;
	wlasciciel = dodaj_wlasciciela;	
	siedziba.dodajSiedzibe(dodaj_adres, dodaj_nr_telefonu, dodaj_liczba_pomieszczen);
	liczba_pracownikow=ile_pracownikow;
	liczba_ksiazek=ile_ksiazek;
	pracownicy = new Pracownicy[liczba_pracownikow];
	ksiazka = new Ksiazka[liczba_ksiazek];
	iloscObiektow++;
	cout << "Obiekty:" << iloscObiektow << endl;

}

Ksiegarnia::Ksiegarnia(const Ksiegarnia &ksiegarnia) //konstruktor kopiujacy
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor kopiujacy obiektu Ksiegarnia" << endl;

#endif
	nazwa = ksiegarnia.nazwa;
	wlasciciel = ksiegarnia.wlasciciel;
	liczba_ksiazek = ksiegarnia.liczba_ksiazek;
	liczba_pracownikow = ksiegarnia.liczba_pracownikow;
	siedziba = ksiegarnia.siedziba;

	if (ksiegarnia.pracownicy != nullptr)
	{
		pracownicy = new Pracownicy[liczba_pracownikow];
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
	}
	iloscObiektow++;
	cout << "Obiekty:" << iloscObiektow << endl;
}

Ksiegarnia::~Ksiegarnia()
{
#ifdef _DEBUG

	cout << "Wywolano destruktor obiektu Ksiegarnia" << endl;

#endif
	delete[]ksiazka;
	delete[]pracownicy;
	iloscObiektow--;
}

//===========================METODY==============================
void Ksiegarnia::wyswietlLiczbePracownikow()
{
	cout<<liczba_pracownikow<<endl;
}
void Ksiegarnia::wyswietlLiczbeKsiazek()
{
	cout<<liczba_ksiazek<<endl;
}
void Ksiegarnia::wyswietlDaneKsiegarni()
{
	cout<<"Siedziba ksiegarni:"<<endl<<endl;
	siedziba.wyswietlSiedzibe();

	if (liczba_pracownikow > 0)
	{
		cout<<"Pracownicy ksiegarni:"<<endl<<endl;
		for (int i = 0; i < liczba_pracownikow; i++)
		{
			pracownicy[i].wyswietlPracownika();
		}
	}
	else
	cout << "Brak pracownikow" << endl;

	if (liczba_ksiazek > 0)
	{
		cout << "Ksiazki w ksiegarni:" << endl << endl;
		for (int i = 0; i < liczba_ksiazek; i++)
		{
			ksiazka[i].wyswietlKsiazke();
		}
	}
	else
		cout << "Brak ksiazek" << endl;
}

void Ksiegarnia::dodajKsiazke(string nowy_tytul, string nowy_autor, int nowy_rok)
{
	Ksiazka* temp;
	temp = new Ksiazka [liczba_ksiazek];
	for (int i = 0; i < liczba_ksiazek; i++)
	{
		temp[i]=ksiazka[i];
	}
	delete[]ksiazka;
	liczba_ksiazek++;
	ksiazka = new Ksiazka [liczba_ksiazek];

	for (int i = 0; i < liczba_ksiazek-1; i++)
	{
		ksiazka[i]=temp[i];
	}
	ksiazka [liczba_ksiazek-1].wprowadzTytul(nowy_tytul);
	ksiazka [liczba_ksiazek-1].wprowadzAutora(nowy_autor);
	ksiazka [liczba_ksiazek-1].wprowadzRokWydania(nowy_rok);

	delete[]temp;
}

void Ksiegarnia::dodajPracownika(string nowe_nazwisko_imie, string nowe_stanowisko, float nowe_zarobki)
{
	Pracownicy* temp;
	temp = new Pracownicy[liczba_pracownikow];
	for (int i = 0; i < liczba_pracownikow; i++)
	{
		temp[i] = pracownicy[i];
	}
	delete[] pracownicy;
	liczba_pracownikow++;
	pracownicy = new Pracownicy[liczba_pracownikow];

	for (int i = 0; i < liczba_pracownikow-1; i++)
	{
		pracownicy[i] = temp[i];
	}
	pracownicy[liczba_pracownikow-1].wprowadzNazwiskoIImie(nowe_nazwisko_imie);
	pracownicy[liczba_pracownikow-1].wprowadzStanowisko(nowe_stanowisko);
	pracownicy[liczba_pracownikow-1].wprowadzZarobki(nowe_zarobki);

	delete[]temp;
}

//===========================OPERATORY==============================

bool Ksiegarnia::operator==(const Ksiegarnia &k) //sprawdzenie czy w obu ksiegarniach jest tyle samo pracownikow
{
	if (k.liczba_pracownikow == liczba_pracownikow)
		return true;
	else
		return false;
}

bool Ksiegarnia::operator>(const Ksiegarnia &k) //czy ilosc ksiazek w 2 ksiegarni jest wieksza niz w 1
{
	if (k.liczba_ksiazek > liczba_ksiazek)
		return true;
	else
		return false;
}

bool Ksiegarnia::operator<(const Ksiegarnia &k) //czy w pierwszej ksiegarni pracuje wiecej osob niz w drugiej
{
	if (k.liczba_pracownikow < liczba_pracownikow)
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
	liczba_pracownikow = k.liczba_pracownikow;
	liczba_ksiazek = k.liczba_ksiazek;
	siedziba = k.siedziba;

	if (pracownicy != nullptr)
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
	}
}
	return *this;
}

Ksiegarnia& Ksiegarnia::operator += (const Ksiegarnia &k) //ilu pracownikow pracuje w sumie w obu ksiegarniach
{
	liczba_pracownikow += k.liczba_pracownikow;
	return *this;
}

Ksiegarnia& Ksiegarnia::operator++(int) //zwiekszenie o 1 liczby ksiazek w ksiegarni
{
	liczba_ksiazek ++;
	return *this;
}

Ksiegarnia& Ksiegarnia::operator--(int) //zmniejszenie o 1 liczby pracownikow w ksiegarni
{
	if(liczba_ksiazek>0)
	liczba_ksiazek--;
	return *this;
}

ostream& operator<<(ostream&s, Ksiegarnia &k) //operator strumieniowy
{
	s << "Nazwa: "<< k.nazwa << endl << "Wlasciciel: "<< k.wlasciciel << endl << "Liczba pracownikow: "<< k.liczba_pracownikow << endl << "Liczba ksiazek: "<< k.liczba_ksiazek << endl;
	s << k.siedziba<<endl;
	for (int i = 0; i < k.liczba_pracownikow; i++)
	{
		s << k.pracownicy[i] << endl;
	}
	for (int i = 0; i < k.liczba_ksiazek; i++)
	{
		s << k.ksiazka[i] << endl;
	}
	return s;
}

Pracownicy& Ksiegarnia::operator[](unsigned int i) //operator indeksowania - zwraca obiekt Pracownicy o podanym nr
{
	if (i < liczba_pracownikow)
	{
		return pracownicy[i];
	}
}

Ksiegarnia::operator int() //operator konwertujacy
{
	return liczba_ksiazek;
}







