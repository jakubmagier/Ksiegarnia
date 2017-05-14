#include <iostream>
#include <string>
#include "Przedsiebiorstwo.h"
#include "Ksiegarnia.h"
#include "Drukarnia.h"
#include "Ksiegarnia internetowa.h"

using namespace std;

void zapiszDoPliku(vector<Przedsiebiorstwo*> wektor, ostream &s)
{
	for (unsigned int i = 0; i < wektor.size(); i++)
	{
		wektor[i]->wypiszDaneFirmy(s);
	}
}

void wyswietl(vector<Przedsiebiorstwo*> wektor, ostream &s)
{
	cout << "Funkcja funkcja" << endl;
	for (unsigned int i = 0; i < wektor.size(); i++)
	{
		wektor[i]->wypiszDaneFirmy(s);
		s << endl;
		cout<<"Funkcja dziala"<<endl;
	}
}

	//Ksiegarnia test("Kolorowa", "Jan Kowalski", 1, 3, "Marszalkowska 22", 227564743, 3);
	//Ksiegarnia test1("Nowoczesna", "Piotr Nowak", 2, 2, "Aleje Jerozolimskie 24", 227654567, 4);
	//test.dodajPracownika("Andrzej Nowacki", "ochroniarz", 1750);

/*	cout<<endl;
	cout << endl << "Nacisnij klawisz [ENTER] aby przejsc do testow operatorow." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;
	
	cout << "******************  1.test operatora ==:" << endl<<endl;
	if(test1 == test2)
		cout <<"W obu ksiegarniach jest tyle samo pracownikow" << endl<<endl;
	else
		cout <<"W obu ksiegarniach jest rozna liczba pracownikow "<< endl<<endl;

	cout << "******************  2.test operatora >:" << endl<<endl;
	if(test1 > test2)
		cout<<"W drugiej ksiegarni jest wiecej ksiazek niz w pierwszej"<<endl<<endl;
	else
		cout<<"W drugiej ksiegarni jest mniej ksiazek niz w pierwszej"<<endl<<endl;

	cout << "******************  3.test operatora <:" << endl<<endl;
	if(test1 < test2)
		cout<<"W pierwszej ksiegarni pracuje wiecej osob niz w drugiej" <<endl<<endl;
	else
		cout<<"W pierwszej ksiegarni pracuje mniej osob niz w drugiej"<<endl<<endl;

	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;
	
	cout << "******************  4.test operatora <<:" << endl;
	cout << "Pierwsza ksiegarnia:" <<endl <<endl;
	cout << test;

	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cin.get();

	cout << "---------------------------------------------------------" << endl;
	*//*
	cout << "******************  5.test operatora []:" << endl;
	cout << "Pracownik o numerze 2:"<<endl;
	cout << test1[1] << endl;

	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;

	cout << "******************  8.test operatora =:" << endl<<endl;
	test1 = test2;

	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;

	cout << "******************  10.test operatora int():" << endl<<endl;
	cout << "Suma ksiazek w obu ksiegarniach:"<<endl;
	cout << sumaKsiazek(test1, test2)<<endl;
	
	cout << endl << "Nacisnij klawisz [ENTER] aby zakonczyc dzialanie programu." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;
	*/



