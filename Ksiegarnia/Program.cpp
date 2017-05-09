#include <iostream>
#include <string>
#include "Ksiegarnia.h"
#include "Drukarnia.h"

using namespace std;

int sumaKsiazek(int a, int b)
{
	return a + b;
}

int main()
{
	//Konstruktor ksiegarni: nazwa, wlasciciel, liczba pracownikow, liczba ksiazek, adres, nr telefonu, liczba pomieszczen)
	Drukarnia test;
	test.wyswietlStan();

	//Ksiegarnia test("Kolorowa", "Jan Kowalski", 1, 3, "Marszalkowska 22", 227564743, 3);
	//Ksiegarnia test1("Nowoczesna", "Piotr Nowak", 2, 2, "Aleje Jerozolimskie 24", 227654567, 4);
	//test.dodajPracownika("Andrzej Nowacki", "ochroniarz", 1750);

#ifdef _DEBUG
	/*cout<<endl;
	cout<<"*********Pierwsza ksiegarnia: **********"<<endl<<endl;
	//test.wyswietlDaneKsiegarni();
	
	cout << "*********Druga ksiegarnia:********** " << endl<<endl;
	//test1.wyswietlDaneKsiegarni();

	cout << endl << "Nacisnij klawisz [ENTER] aby przejsc do testow operatorow." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;

	cout << "******************  1.test operatora ==:" << endl<<endl;
	if(test == test1)
		cout <<"W obu ksiegarniach jest tyle samo pracownikow" << endl<<endl;
	else
		cout <<"W obu ksiegarniach jest rozna liczba pracownikow "<< endl<<endl;

	cout << "******************  2.test operatora >:" << endl<<endl;
	if(test > test1)
		cout<<"W drugiej ksiegarni jest wiecej ksiazek niz w pierwszej"<<endl<<endl;
	else
		cout<<"W drugiej ksiegarni jest mniej ksiazek niz w pierwszej"<<endl<<endl;

	cout << "******************  3.test operatora <:" << endl<<endl;
	if(test < test1)
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

	cout << "******************  5.test operatora []:" << endl;
	cout << "Pracownik o numerze 2:"<<endl;
	cout << test[1] << endl;

	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;

	cout << "******************  6.test operatora +=:" << endl << endl;
	cout << "Liczba pracownikow pierwszej ksiegarnii: ";
	test.wyswietlLiczbePracownikow();
	cout << "Liczba pracownikow drugiej ksiegarnii: ";
	test1.wyswietlLiczbePracownikow();
	test += test1;
	cout << "Suma osob pracujacych w obu ksiegarniach: ";
	test.wyswietlLiczbePracownikow();
	cout << endl;

	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;

	cout << "******************  7.test operatora ++:" << endl;
	cout << "Liczba ksiazek w pierwszej ksiegarnii:";
	test.wyswietlLiczbeKsiazek();
	test++;
	cout << "Zwiekszona liczba ksiazek w pierwszej ksiegarnii:  ";
	test.wyswietlLiczbeKsiazek();
	cout << endl;

	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;

	cout << "******************  8.test operatora =:" << endl<<endl;
	test = test1;
//	test.wyswietlDaneKsiegarni();
//	test1.wyswietlDaneKsiegarni();

	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;

	cout << "******************  9.test operatora --:" << endl<<endl;
	cout << "Liczba ksiazek w drugiej ksiegarnii:";
	test1.wyswietlLiczbeKsiazek();
	test1--;
	cout << "Obecna liczba ksiazek w drugiej ksiegarnii:";
	test1.wyswietlLiczbeKsiazek();
	cout<<endl;

	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;

	cout << "******************  10.test operatora int():" << endl<<endl;
	cout << "Suma ksiazek w obu ksiegarniach:"<<endl;
	cout << sumaKsiazek(test, test1)<<endl;
	
	cout << endl << "Nacisnij klawisz [ENTER] aby zakonczyc dzialanie programu." << endl;
	cin.get();
	cout << "---------------------------------------------------------" << endl;
	*/
#endif
	return 0;
}


