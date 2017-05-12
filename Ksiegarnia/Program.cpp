#include <iostream>
#include <string>
#include "Przedsiebiorstwo.h"
#include "Ksiegarnia.h"
#include "Drukarnia.h"
#include "Ksiegarnia internetowa.h"

using namespace std;

int wybor;
int sumaKsiazek(int a, int b)
{
	return a + b;
}

int main()
{
	//Konstruktor ksiegarni: nazwa, wlasciciel, liczba pracownikow, liczba ksiazek, adres, nr telefonu, liczba pomieszczen)
	Ksiegarnia test1(4,1);
	Ksiegarnia test2(1,3);
	test1.wyswietlStan();
	test2.wyswietlStan();

/*	test.wyswietlStan();
	test.dodajPracownika();
	test.wyswietlStan();	
	test.usunPracownika();
	test.wyswietlStan();
	*/
	/*cout << endl << "Witam w programie Przedsiebiorstwo, wybierz opcje:" << endl;
	cout << endl << "1. Wyswietl stan" << endl;
	cout << endl << "2. Dodaj pracownika" << endl;
	cout << endl << "3. Usun pracownika" << endl;
	cout << endl << "4. Dodaj ksiazke" << endl;
	cout << endl << "5. Usun ksiazke" << endl;
	cout << endl << "6. Zapisz do pliku" << endl;
	cout << endl << "7. Odczytaj z pliku" << endl;
	cout << endl << "8. Opusc program" << endl;

	cin>>wybor;
	if(wybor!=1,2,3,4)
	cout<<"Blad"<<endl;
	switch (wybor)
	{
		case 1: test.wyswietlStan();
				testowa.wyswietlStan();
				cin.get();
				break;
		case 4:	break;
	}
	*/

	//Ksiegarnia test("Kolorowa", "Jan Kowalski", 1, 3, "Marszalkowska 22", 227564743, 3);
	//Ksiegarnia test1("Nowoczesna", "Piotr Nowak", 2, 2, "Aleje Jerozolimskie 24", 227654567, 4);
	//test.dodajPracownika("Andrzej Nowacki", "ochroniarz", 1750);

#ifdef _DEBUG
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
#endif
	return 0;
}


