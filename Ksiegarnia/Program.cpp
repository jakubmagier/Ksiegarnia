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
	for (unsigned int i = 0; i < wektor.size(); i++)
	{
		s << endl;
		wektor[i]->wypiszDaneFirmy(s);
		s << endl;
	}
}

void wczytajZPliku(vector<Przedsiebiorstwo*> &wektor, istream &s)
{
	Ksiegarnia *ks;
	KsiegarniaInternetowa *ksi;
	Drukarnia *dr;
	string rodzaj_firmy;
	while (s >> rodzaj_firmy)
	{
		if (rodzaj_firmy == "Ksiegarnia")
		{
			ks = new Ksiegarnia();
			ks->wprowadzDaneFirmyZPliku(s);
			wektor.push_back(ks);
		}
		else if (rodzaj_firmy == "Drukarnia")
		{
			dr = new Drukarnia();
			dr->wprowadzDaneFirmyZPliku(s);
			wektor.push_back(dr);
		}
		else
		{
			s >> rodzaj_firmy;
			ksi = new KsiegarniaInternetowa();
			ksi->wprowadzDaneFirmyZPliku(s);
			wektor.push_back(ksi);
			
		}
	}
}

int main()
{
	vector <Przedsiebiorstwo*> obiekt;
	ifstream plik_wejsciowy;
	ofstream plik_wyjsciowy;
	Ksiegarnia *ks;
	Drukarnia *dr;
	KsiegarniaInternetowa *ksi;
	/*
	int wybor;
	cin >> wybor;
	switch (wybor)
	{
		case 1: {
		string podana_nazwa_pliku;
	cout << "Podaj nazwe pliku do odczytu.(z dopiskiem "".txt"")" << endl;
	cin >> podana_nazwa_pliku;
	plik_wejsciowy.open(podana_nazwa_pliku);
	if (plik_wejsciowy.good())
	{
		wczytajZPliku(obiekt, plik_wejsciowy);

	}
	else
		cout << "Nieudane otwarcie pliku." << endl;
	plik_wejsciowy.close();

	wyswietl(obiekt, cout);
	break;
	}
	case 2: 
	{
		ks = new Ksiegarnia(2, 2);
		obiekt.push_back(ks);
		ksi = new KsiegarniaInternetowa();
		obiekt.push_back(ksi);
		dr = new Drukarnia(2);
		obiekt.push_back(dr);
		wyswietl(obiekt, cout);

		string podana_nazwa_pliku;
		cout << "Podaj nazwe pliku do zapisu.(z dopiskiem "".txt"")" << endl;
		cin >> podana_nazwa_pliku;
		plik_wyjsciowy.open(podana_nazwa_pliku);
		if (plik_wyjsciowy.good())
		{
			zapiszDoPliku(obiekt, plik_wyjsciowy);

		}
		else
			cout << "Blad otwarcia pliku" << endl;
		plik_wyjsciowy.close();
		break;
	}
	default:
	cout<<"blad"<<endl;
	break;
	}*/

	int zakoncz_program=1;

	while (zakoncz_program)
	{
		cout << endl <<	"Witam w programie Przedsiebiorstwo, wybierz opcje:" << endl;
		cout << endl << "1. Wyswietl stan" << endl;
		cout << endl << "2. Dodaj obiekt" << endl;
		cout << endl << "3. Wprowadz dane z pliku" << endl;
		cout << endl << "4. Zapisz do pliku" << endl;
		cout << endl << "q. Opusc program" << endl;
		char wybor = 'x';
		cin>>wybor;
		if(wybor == '1')
		{
			system("cls");
			wyswietl(obiekt, cout);
		}
		else if (wybor == '2')
		{
			system("cls");
			int koniec_dodawania_obiektów = 1;
			while(koniec_dodawania_obiektów)
			{
				cout << endl << "1. Dodaj ksiegarnie" << endl;
				cout << endl << "2. Dodaj ksiegarnie internetowa" << endl;
				cout << endl << "3. Dodaj drukarnie" << endl;
				cout << endl << "q. Powrot" << endl;
				char wybor_obiektu = 'x';
				cin >> wybor_obiektu;
				if (wybor_obiektu == '1')
				{
					system("cls");
					ks = new Ksiegarnia();

					int koniec_dodawania_ksiegarni = 1;
					while(koniec_dodawania_ksiegarni)
					{
						cout << endl << "1. Dodaj pracownika" << endl;
						cout << endl << "2. Usun pracownika" << endl;
						cout << endl << "3. Dodaj ksiazke" << endl;
						cout << endl << "4. Usun ksiazke" << endl;
						cout << endl << "q. Powrot" << endl;
						char opcja_ksiegarni = 'x';
						cin >> opcja_ksiegarni;
						switch (opcja_ksiegarni)
						{
							case '1':
							{	
								system("cls");
								cout << "Imie i nazwisko" << endl;
								string imie_nazwisko;
								cin >> imie_nazwisko;
								cout << "Zarobki" << endl;
								float zarobki;
								cin >> zarobki;
								ks->dodajPracownika(imie_nazwisko, zarobki);
								break;
							}	
							case '2':
							{
								system("cls");
								cout << "Numer pracownika ktorego usuwamy:" << endl;
								int numer;
								cin >> numer;
								ks->usunPracownika(numer);
								break;
							}
							case '3':
							{
								system("cls");
								cout << "Tytul:" << endl;
								string tytul;
								cin >> tytul;
								cout << "Autor:" << endl;
								string autor;
								cin >> autor;
								cout << "Rok wydania:" << endl;
								int rok;
								cin >> rok;
								ks->dodajKsiazke(tytul, autor, rok);
								break;
							}
							case '4':
							{
								system("cls");
								cout << "Numer ksiazki ktora usuwamy:" << endl;
								int numer;
								cin >> numer;
								ks->usunKsiazke(numer);
								break;
							}
							case 'q':
							{
								system("cls");
								koniec_dodawania_ksiegarni = 0;
								break;
							}
							default:
							{
								system("cls");
								cout << "Wprowadziles bledny znak, sprobuj jeszcze raz!" << endl;
								break;
							}
						}
					}
					obiekt.push_back(ks);
				}else if (wybor_obiektu == '2')
				{
					system("cls");
					ksi = new KsiegarniaInternetowa();

					int koniec_dodawania_ksiegarni = 1;
					while (koniec_dodawania_ksiegarni)
					{
						cout << endl << "1. Dodaj pracownika" << endl;
						cout << endl << "2. Usun pracownika" << endl;
						cout << endl << "3. Dodaj ksiazke" << endl;
						cout << endl << "4. Usun ksiazke" << endl;
						cout << endl << "q. Powrot" << endl;
						char opcja_ksiegarni = 'x';
						cin >> opcja_ksiegarni;
						switch (opcja_ksiegarni)
						{
							case '1':
							{
								system("cls");
								cout << "Imie i nazwisko" << endl;
								string imie_nazwisko;
								cin >> imie_nazwisko;
								cout << "Zarobki" << endl;
								float zarobki;
								cin >> zarobki;
								ksi->dodajPracownika(imie_nazwisko, zarobki);
								break;
							}
							case '2':
							{
								system("cls");
								cout << "Numer pracownika ktorego usuwamy:" << endl;
								int numer;
								cin >> numer;
								ksi->usunPracownika(numer);
								break;
							}
							case '3':
							{
								system("cls");
								cout << "Tytul:" << endl;
								string tytul;
								cin >> tytul;
								cout << "Autor:" << endl;
								string autor;
								cin >> autor;
								cout << "Rok wydania:" << endl;
								int rok;
								cin >> rok;
								ksi->dodajKsiazke(tytul, autor, rok);
								break;
							}
							case '4':
							{
								system("cls");
								cout << "Numer ksiazki ktora usuwamy:" << endl;
								int numer;
								cin >> numer;
								ksi->usunKsiazke(numer);
								break;
							}
							case 'q':
							{
								system("cls");
								koniec_dodawania_ksiegarni = 0;
								break;
							}
							default:
							{
								system("cls");
								cout << "Wprowadziles bledny znak, sprobuj jeszcze raz!" << endl;
								break;
							}
						}
					}
					obiekt.push_back(ksi);
				}
				else if (wybor_obiektu == '3')
				{
					system("cls");
					dr = new Drukarnia();

					int koniec_dodawania_drukarni = 1;
					while (koniec_dodawania_drukarni)
					{
						cout << endl << "1. Dodaj pracownika" << endl;
						cout << endl << "2. Usun pracownika" << endl;
						cout << endl << "q. Powrot" << endl;
						char opcja_drukarni = 'x';
						cin >> opcja_drukarni;
						switch (opcja_drukarni)
						{
						case '1':
						{
							system("cls");
							cout << "Imie i nazwisko" << endl;
							string imie_nazwisko;
							cin >> imie_nazwisko;
							cout << "Zarobki" << endl;
							float zarobki;
							cin >> zarobki;
							dr->dodajPracownika(imie_nazwisko, zarobki);
							break;
						}
						case '2':
						{
							system("cls");
							cout << "Numer pracownika ktorego usuwamy:" << endl;
							int numer;
							cin >> numer;
							dr->usunPracownika(numer);
							break;
						}
						case 'q':
						{
							system("cls");
							koniec_dodawania_drukarni = 0;
							break;
						}
						default:
						{
							system("cls");
							cout << "Wprowadziles bledny znak, sprobuj jeszcze raz!" << endl;
							break;
						}
						}
					}
					obiekt.push_back(dr);
				}
				else if (wybor_obiektu == 'q')
				{	
					system("cls");
					koniec_dodawania_obiektów = 0;
				}
				else 
				{
					system("cls");
					cout << "Wprowadziles bledny znak, sprobuj jeszcze raz!" << endl;
				}
			}
		}
		else if(wybor == '3')
		{
			system("cls");
			string podana_nazwa_pliku;
			cout << "Podaj nazwe pliku do odczytu.(z dopiskiem "".txt"")" << endl;
			cin >> podana_nazwa_pliku;		
			plik_wejsciowy.open(podana_nazwa_pliku);
			if (plik_wejsciowy.good())
			{
				wczytajZPliku(obiekt, plik_wejsciowy);
			}else
			{
				cout << "Nieudane otwarcie pliku." << endl;
			}
			plik_wejsciowy.close();
		}
		else if(wybor == '4')
		{
			system("cls");
			string podana_nazwa_pliku;
			cout << "Podaj nazwe pliku do zapisu.(z dopiskiem "".txt"")" << endl;
			cin >> podana_nazwa_pliku;
			plik_wyjsciowy.open(podana_nazwa_pliku);
			if (plik_wyjsciowy.good())
			{
				zapiszDoPliku(obiekt, plik_wyjsciowy);

			}
			else
				cout << "Blad otwarcia pliku" << endl;
			plik_wyjsciowy.close();
		}
		else if(wybor == 'q')
		{
			system("cls");
			zakoncz_program = 0;
		}
		else
		{
			system("cls");
			cout << "Wprowadziles bledny znak, sprobuj jeszcze raz!" << endl;
		}
	}
}
/*
Drukarnia *dr;
dr = new Drukarnia();
obiekt.push_back(dr);
wyswietl(obiekt, cout);

{
string podana_nazwa_pliku;
cout << "Podaj nazwe pliku do zapisu.(z dopiskiem "".txt"")" << endl;
cin >> podana_nazwa_pliku;
plik_wyjsciowy.open(podana_nazwa_pliku);
if (plik_wyjsciowy.good())
{
zapiszDoPliku(obiekt, plik_wyjsciowy);

}
else
cout << "Blad otwarcia pliku" << endl;
plik_wyjsciowy.close();

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



