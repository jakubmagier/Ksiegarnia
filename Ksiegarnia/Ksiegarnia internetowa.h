#pragma once
#include <iostream>
#include <string>
#include "Ksiegarnia.h"

using namespace std;

class KsiegarniaInternetowa : public Ksiegarnia
{
	string adres_domeny;
	string opcje_wysylki;
	
public:
	KsiegarniaInternetowa();
	~KsiegarniaInternetowa();
};

