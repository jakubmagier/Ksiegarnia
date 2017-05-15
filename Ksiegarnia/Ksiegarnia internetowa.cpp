#include <iostream>
#include <string>
#include <fstream>
#include "Ksiegarnia internetowa.h"

using namespace std;

///Konstruktor domyslny obiektu Ksiegarnia internetowa

KsiegarniaInternetowa::KsiegarniaInternetowa()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor obiektu Ksiegarnia Internetowa" << endl;
#endif
	adres_domeny = "www.dobraksiazka.pl";
	opcje_wysylki = "Poczta Polska, Kurier DPD";
}

KsiegarniaInternetowa::~KsiegarniaInternetowa()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor obiektu Ksiegarnia Internetowa" << endl;
#endif
}

void KsiegarniaInternetowa::wypiszDaneFirmy(ostream & s)
{
	s << "KsiegarniaInternetowa" << endl;
	Ksiegarnia::wypiszDaneFirmy(s);
	s << *this;
}
void KsiegarniaInternetowa::wprowadzDaneFirmyZPliku(istream &s)
{
	Ksiegarnia::wprowadzDaneFirmyZPliku(s);
	s >> *this;
}
istream & operator >> (istream & s, KsiegarniaInternetowa & k)
{
	string zmienna_pomocnicza;
	s >> zmienna_pomocnicza >>zmienna_pomocnicza;
	s >> k.adres_domeny;
	s >> zmienna_pomocnicza >> zmienna_pomocnicza;
	s >> k.opcje_wysylki;
	return s;
}
ostream & operator<<(ostream & s, KsiegarniaInternetowa & k)
{
	s << "Adres domeny: "<< endl;
	s << k.adres_domeny << endl;
	s << "Opcje wysylki:" << endl;
	s << k.opcje_wysylki << endl;
	return s;
}
