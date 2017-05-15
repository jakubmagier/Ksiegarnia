#include <iostream>
#include <string>
#include "Przedsiebiorstwo.h"
#include "Ksiegarnia.h"
#include "Drukarnia.h"
#include "Siedziba.h"
#include "Ksiegarnia internetowa.h"

using namespace std;

void zapiszDoPliku(vector<Przedsiebiorstwo*> wektor, ostream &s)
{
	for (size_t i = 0; i < wektor.size(); i++)
	{
		wektor[i]->wypiszDaneFirmy(s);
	}
}

void wyswietl(vector<Przedsiebiorstwo*> wektor, ostream &s)
{
	for (size_t i = 0; i < wektor.size(); i++)
	{
		s << endl;
		wektor[i]->wypiszDaneFirmy(s);
		s << endl;
	}
}

void wczytajZPliku(vector<Przedsiebiorstwo*> &wektor, istream &s)
{
	KsiegarniaInternetowa *ksi;
	Drukarnia *dr;
	string rodzaj_firmy;
	while (s >> rodzaj_firmy)
	{
		if (rodzaj_firmy == "Ksiegarnia")
		{
			ksi = new KsiegarniaInternetowa();
			ksi->wprowadzDaneFirmyZPliku(s);
			wektor.push_back(ksi);
		}
		else if (rodzaj_firmy == "Drukarnia")
		{
			dr = new Drukarnia();
			dr->wprowadzDaneFirmyZPliku(s);
			wektor.push_back(dr);
		}
	}
}

int main()
{
	vector <Przedsiebiorstwo*> obiekt;
	ifstream plik_wejsciowy;
	ofstream plik_wyjsciowy;
	Drukarnia *dr;
	KsiegarniaInternetowa *ksi;

	int zakoncz_program=1;
	while (zakoncz_program)
	{
		cout << endl <<	"Witam w programie 'Przedsiebiorstwo', wybierz opcje:" << endl;
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
				cout << endl << "1. Dodaj ksiegarnie internetowa" << endl;
				cout << endl << "2. Dodaj drukarnie" << endl;
				cout << endl << "q. Powrot" << endl;
				char wybor_obiektu = 'x';
				cin >> wybor_obiektu;
				if (wybor_obiektu == '1')
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
						cout << endl << "5. Wprowadz dane firmy" << endl;
						cout << endl << "q. Powrot" << endl;
						char opcja_ksiegarni = 'x';
						cin >> opcja_ksiegarni;
						switch (opcja_ksiegarni)
						{
							case '1':
							{
								system("cls");
								string nazwisko;
								cout << "Nazwisko" << endl;
								cin >> nazwisko;
								cout << "Zarobki" << endl;
								float zarobki;
								cin >> zarobki;
								ksi->dodajPracownika(nazwisko, zarobki);
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
								cout << "Nazwisko autora:" << endl;
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
							case '5':
							{
								system("cls");
								string nazwa, nazwa_przedsiebiorstwa, wlasciciel, adres_domeny, ulica, nr_domu;
								int nr_telefonu;
								cout << "Nazwa przedsiebiorstwa:" << endl;
								cin >> nazwa_przedsiebiorstwa;
								cout << "Nazwa ksiegarni:" << endl;
								cin >> nazwa;
								cout << "Nazwisko wlasciciela:" << endl;
								cin >> wlasciciel;
								cout << "Ulica:" << endl;
								cin >> ulica;
								cout << "Nr telefonu:" << endl;
								cin >> nr_telefonu;
								cout << "Adres domeny:" << endl;
								cin >> adres_domeny;
								ksi->wprowadzDaneKsiegarniInternetowej(adres_domeny);
								ksi->wprowadzDaneKsiegarni(nazwa, ulica, nr_telefonu);
								ksi->wprowadzDanePrzedsiebiorstwa(nazwa_przedsiebiorstwa, wlasciciel);
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
				else if (wybor_obiektu == '2')
				{
					system("cls");
					dr = new Drukarnia();

					int koniec_dodawania_drukarni = 1;
					while (koniec_dodawania_drukarni)
					{
						cout << endl << "1. Dodaj pracownika" << endl;
						cout << endl << "2. Usun pracownika" << endl;
						cout << endl << "3. Wprowadz dane firmy" << endl;
						cout << endl << "q. Powrot" << endl;
						char opcja_drukarni = 'x';
						cin >> opcja_drukarni;
						switch (opcja_drukarni)
						{
						case '1':
						{
							system("cls");
							cout << "Nazwisko pracownika:" << endl;
							string nazwisko;
							cin >> nazwisko;
							cout << "Zarobki" << endl;
							float zarobki;
							cin >> zarobki;
							dr->dodajPracownika(nazwisko, zarobki);
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
						case '3':
						{
							system("cls");
							string nazwa, nazwa_przedsiebiorstwa, wlasciciel, ulica;
							int ilosc_drukarek, nr_telefonu;
							cout << "Nazwa przedsiebiorstwa:" << endl;
							cin >> nazwa_przedsiebiorstwa;
							cout << "Nazwa drukarni:" << endl;
							cin >> nazwa;
							cout << "Nazwisko wlasciciela:" << endl;
							cin >> wlasciciel;
							cout << "Ilosc drukarek:" << endl;
							cin >> ilosc_drukarek;
							cout << "Ulica:" << endl;
							cin >> ulica;
							cout << "Nr telefonu:" << endl;
							cin >> nr_telefonu;
							dr->wprowadzDaneDrukarni(nazwa, ulica, ilosc_drukarek, nr_telefonu);
							dr->wprowadzDanePrzedsiebiorstwa(nazwa_przedsiebiorstwa, wlasciciel);
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
	}obiekt.erase(obiekt.begin(), obiekt.end());
}