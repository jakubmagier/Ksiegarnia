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
	s << "Ksiegarnia internetowa:" << endl;
	Ksiegarnia::wypiszDaneFirmy(s);
	s << *this;
}
ostream & operator<<(ostream & s, KsiegarniaInternetowa & k)
{
	s << "Adres domeny: "<< endl;
	s << k.adres_domeny << endl;
	s << "Opcje wysylki" << endl;
	s << k.opcje_wysylki << endl;
	return s;
}
