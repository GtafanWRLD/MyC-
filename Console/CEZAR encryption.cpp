// ConsoleApplication5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się x kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>

using namespace std;

void szyfrowanie_napisu(int klucz, char tablica1[])
{
	int zmienna1 = strlen(tablica1);
	if (!(klucz >= -25 && klucz <= 25)) return;
	if (klucz >= 0)
		for (int i = 0; i < zmienna1; i++)
		if (tablica1[i] + klucz <= 'Z')
			tablica1[i] += klucz;
		else
			tablica1[i] = tablica1[i] + klucz - 26;
	else
		for (int i = 0; i < zmienna1; i++)
		if (tablica1[i] + klucz >= 'A')
			tablica1[i] += klucz;
		else
			tablica1[i] = tablica1[i] + klucz + 26;
}







int main()
{
	char napis[255];
	napis[0] = 'a';
	napis[1] = 'b';
	napis[2] = 'c';
	napis[3] = '\0';

	int x;
	int klucz;

	//szyfr cezara plotowy i vigenere'a
	//cezar
	cout << "Podaj wyraz (WIELKIMI LITERAMI): ";
	cin >> napis;
	cout << "Podaj klucz od -25 do 25: ";
	cin >> klucz;
	szyfrowanie_napisu(klucz, napis);
	cout << "Po szyfrowaniu: " << napis << endl;
	szyfrowanie_napisu(-klucz, napis);
	cout << "Po rozszyfrowaniu: " << napis << endl;
	system("pause");
	return 0;

}

