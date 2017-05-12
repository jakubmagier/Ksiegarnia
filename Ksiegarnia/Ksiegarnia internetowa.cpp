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
