#include <iostream>
#include <string>
#include "Drukarnia.h"

using namespace std;

/// Konstruktor domyslny obiektu Drukarnia
Drukarnia::Drukarnia() 
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor domyslny obiektu Drukarnia" << endl;

#endif
	nazwa = "Tani druk";
	ilosæ_drukarek = 10;
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
	iloscObiektow--;
}

void Drukarnia::wyswietlStan()
{
cout<<"Nazwa drukarni:"<<nazwa<<endl;
cout << "Liczba drukarek:" << ilosæ_drukarek << endl;
}

/*void Drukarnia::dodajPracownika()
{

}
*/