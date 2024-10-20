// ConsoleApplication12.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <string>
#include<fstream>



using namespace std;

class klient : osoba {


	int id;
	int pesel;
	int num_tel;
	string email;
	int nr_dowodu;

public:

		 void wypisz_dane(){
		cout << id << endl;
		cout << pesel << endl;
		cout << num_tel << endl;
		cout << email << endl;
		cout << nr_dowodu << endl;
		}
		 void usun_dane(){
			id = 0;
			pesel=0;
			num_tel = 0;
			email="";
			nr_dowodu=0;
		}
		 void dod_dane() {
			cout << "podaj id " << endl;
			cin >> id;
			cout << "podaj pesel" << endl;
			cin >> pesel;
			cout << "podaj numer telefonu" << endl;
			cin >> num_tel;
			cout << "podaj id email" << endl;
			cin >> email;
			cout << "podaj numer dowodu" << endl;
			cin >> nr_dowodu;
		}
};




class rezerwacja : klient {
	int data_dodania;
	int cena;
	string miejsce;

public:
	void dodaj() {
		cout << "podaj kolejno: date, cene i miejsce rezerwacji" << endl;
		cin >> data_dodania;
		cin >> cena;
		cin >> miejsce

	}
	void usun() {}
	void edytuj() {}
	

};

class film: zlecenie{
	int id_filmu, rok_produkcji, czas_trwania;
	string tytul, opis, aktorzy, rezyser, wytwornia, nagrody;

	void dodaj_dane (){
		cout<<"podaj w kolejnosci: id filmu, rok procukcji, czasz trwania, tytul, opis, aktorw, rezysera, wytrownie oraz nagrody" << endl;
		cin >> id_filmu;
		cin >> rok_produkcji;
		cin >> czas_trwania;
		cin >> tytul;
		cin >> opis;
		cin >> aktorzy;
		cin >> rezyser;
		cin >> wytwornia;
		cin >> nagrody;
	}
	void usun_dane() {
		id_filmu = 0;
		rok_produkcji = 0;
		czas_trwania = 0;
		tytul = "";
		opis = "";
		rezyser = "";
		wytwornia = "";
		nagrody = "";

	}

};


class osoba {


	string imie, nazwisko, ulica, miejscowosc;
	int numer_domu, numer_mieszkania, kod_pocztowy;
public:

	osoba(string i, string n, string u, string m, int n_d, int n_m, int k_p) {
		i = imie;
		n = nazwisko;
		u = ulica;
		m = miejscowosc;
		n_d = numer_domu;
		n_m = numer_mieszkania;
		k_p = kod_pocztowy;
	}



	virtual void usun_dane() {
	
	
	}
	virtual void dod_dane(){}

};

class zlecene : klient {

	bool zlecenie;

public:
	void zatwierdz() {
		cout << "czy zlecenie jest aktualne" << endl;
		cin >> zlecenie;
		if zlecenie == 1 cout"zlecenie aktualne" << endl;
		else cout << "zlecenie nieaktualne" << endl;

	}




};


class pracownik {
	int data_urodzenia;
	string imie_i_naziwsko;
	int pesel;
	int wiek;
	string stanowisko;
	int NIP;
	int zarobki;

	

public:

	pracownik(int d, string i, int w, int p) {
		data_urodzenia = d;
		imie_i_naziwsko = i;
		wiek = w;
		pesel = p;


	virtual void dodaj_pracownika(int d, string i, int w, int p) {
		cout << "podaj imie i nazwisko" << endl;
		cin >> i;
		cout << "podaj wiek" << endl;
		cin >> w;
		cout << "podaj pesel" << endl;
		cin >> p;
		cout << "podaj date urodzenia" << endl;
		cin >> d;
	}
	virtual void edytuj_pracownika() {}
	virtual void usun_pracownika(int d, string i, int w, int p) {
		p = 0;
		w = 0;
		d = 0;
		i = "";
	}

};

class administrator :  pracownik {

	void usun_pracownika(){}
	void edytuj_pracownika(){}
	void dodaj_pracownika(){}
};


class zlecenie : klient {
	
public:
	void zatwierdz(){}
	void odrzuc(){}
	void czyt_dane (){}
};

class sprzedawca : raport {

	int id_sprzedawca;
public:
	void wyswietl_raport(){
		cout << stworz_raport << endl;
	}
};

class raport {
	int ilosc;
	int dochod;
	int dataXD;
public:
	void stworz_raport() {
		cout << "wprowadz kolejno ilosc, dochod oraz date" << endl;
		cin >> ilosc;
		cin >> dochod;
		cin >> dataXD;
	}
	void zapis_do_pliku() {
		fstream plik;
		plik.open("nazwa_pliku.txt", ios::in | ios::out);
		if (plik.good() == true)
		{
			
			plik.close();
		}

	}

};

class wyszukaj {
	string tytul;
	string gatunek;
	string aktorzy;
	string rezyser;

public:
	void szukaj(string tekst, char szukanyZnak) {
	
		size_t znalezionaPozycja = tekst.find(szukanyZnak);
		if (znalezionaPozycja == std::string::npos)
			cout << "Nie znaleziono frazy w tekscie" << endl;
		else
			cout << "Fraza zostala odnaleziona na pozycji " << znalezionaPozycja << endl;

	}
	
	}

};


int main()
{



}

