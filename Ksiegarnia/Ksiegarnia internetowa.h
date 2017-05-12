#pragma once
#include <iostream>
#include <string>
#include "Ksiegarnia.h"

using namespace std;

///Klasa Ksiegarnia internetowa, pochodna klasy Ksiegarnia
class KsiegarniaInternetowa : public Ksiegarnia
{
	string adres_domeny; ///<zmienna przechowujaca adres domeny ksiegarni internetowej
	string opcje_wysylki; ///<zmienna przechowujaca dostepne w ksiegarni internetowej opcje wysylki
	
public:
	///Konstruktor domyslny
	KsiegarniaInternetowa();
	///Destruktor
	~KsiegarniaInternetowa();
	///Zaprzyjazniony operator strumieniowy
	friend ostream&operator <<(ostream&s, KsiegarniaInternetowa &k);
	///Zaprzyjazniony operator strumieniowy
	friend istream&operator >> (istream&s, KsiegarniaInternetowa &k);
};

