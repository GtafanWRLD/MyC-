// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#define SUPER_TAJNE_HASLO "abcdefghi"
#define ROZMIAR_TABLICY 100

using namespace std;

struct str_konto {
	int suma_srodkow;
};

struct str_klient {
public:
	string imie;
	string nazwisko;
	
	str_klient();
	str_klient(string imie, string nazwisko);
	str_klient(string imie, string nazwisko, str_konto * wsk_account);
	void set_numer_konta(int numer);
	int get_numer_konta();
	void set_imie(std::string imie);
	std::string get_imie();
	bool get_flag();
	void set_flag(bool flaga);

	void show_numer_konta();

	str_konto * wsk_account;

private:
		int numer_konta;
		int stan_konta;
		string haslo;
		bool is_defined; // 1 = oznacza, że klient istnieje, 0 - brak klienta
};

void str_klient::set_numer_konta(int numer) 
{ 
	this->numer_konta = numer; 
}

int str_klient::get_numer_konta()
{
		return this->numer_konta;
}

void str_klient::set_imie(std::string imie)
{
	this->imie = imie;
}

std::string str_klient::get_imie()
{
	return (this->imie);
}

void str_klient::set_flag(bool flaga)
{
	this->is_defined = flaga;
}

bool str_klient::get_flag()
{
	return this->is_defined;
}

void str_klient::show_numer_konta()
{
	std::cout << "oto numer konta: " << this->numer_konta << std::endl;
}

//konstruktor
str_klient::str_klient(string imie, string nazwisko) {
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->set_flag(1);
}

//pusty konstruktor
str_klient::str_klient() {
	this->set_flag(1); // ustawia ze klient istnieje
}

//... @Todo zaimplementuj resztę metod get,set dla prywatnych pól struktury


void usun_klienta(str_klient* tab, int numerid_klienta) {
	//tab - tablica klietnow, z ktorej chcemy usunac klienta
	//numerid_klienta jest liczony od 0 do (MAX_KLIENTOW - 1)
	bool usuniete = 0;

	(*(tab + numerid_klienta)).set_flag(usuniete); // flaga oznacza ze klienta nie ma

	(tab + numerid_klienta)->imie = "brak imienia";
	(tab + numerid_klienta)->nazwisko = "brak nazwiska";
    (tab + numerid_klienta)->set_numer_konta(0);
	//...
}

void pokaz_wszystkich_klientow(str_klient* tab) {

	for (int i = 0; i < ROZMIAR_TABLICY; i++) {
		str_klient* aktualny_klient = (tab + i);
		if (aktualny_klient->get_flag() == 1)
			//wypisz imie nazwisko
			//std:string imie = "abc";
			//imie = aktualny_klient->get_imie();
			//std::cout << "id kllienta: " << i << "imie" << imie << std::endl;
			std::cout << "id kllienta: " << i << std::endl;
	}

}

int main()
{
	str_klient klienci[100];

	//5.
	for (int i = 0; i < ROZMIAR_TABLICY; i++) {
		usun_klienta(klienci, i);
	}

	//str_konto abc[10];
	str_klient jan("malgorzata", "Kowlalska");
	str_klient malgorzata("malgorzata", "Kowlalska");

	str_konto *tablica_kont = new str_konto[10];
	jan.wsk_account = tablica_kont;
	delete[]jan.wsk_account; //delete tablica skasuje jej 1 element  a []tablica calosc

	klienci[15] = jan;

	pokaz_wszystkich_klientow(klienci);

	usun_klienta(klienci, 15);
	pokaz_wszystkich_klientow(klienci);

	jan.imie = "Jan";
	jan.nazwisko = "Kowalski";

	jan.set_numer_konta(5);
	std::cout << jan.get_numer_konta() << std::endl;

	std::getchar();
    return 0;
}

