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
}

KsiegarniaInternetowa::~KsiegarniaInternetowa()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor obiektu Ksiegarnia Internetowa" << endl;
#endif
}

void KsiegarniaInternetowa::wypiszDaneFirmy(ostream & s)
{	
	s << "Ksiegarnia" << endl;
	Ksiegarnia::wypiszDaneFirmy(s);
	s << *this;
}
void KsiegarniaInternetowa::wprowadzDaneFirmyZPliku(istream &s)
{
	Ksiegarnia::wprowadzDaneFirmyZPliku(s);
	s >> *this;
}
void KsiegarniaInternetowa::wprowadzDaneKsiegarniInternetowej(string nowy_adres_domeny)
{
	adres_domeny = nowy_adres_domeny;
}
istream & operator >> (istream & s, KsiegarniaInternetowa & k)
{
	string zmienna_pomocnicza;
	s >> zmienna_pomocnicza >>zmienna_pomocnicza;
	s >> k.adres_domeny;
	return s;
}
ostream & operator<<(ostream & s, KsiegarniaInternetowa & k)
{
	s << "Adres domeny: "<< endl;
	s << k.adres_domeny << endl;
	return s;
}
