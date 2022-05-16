#include <conio.h>
#include <iostream>
#include <string>
#include <windows.h>
#include "postacie.h"
#include "RPGE.h"

using namespace std;

string strImie;
int nWiek;
int nKlasa;
int SILA = 0;
int SZCZESCIE = 0;






void main()
{
	//WSTĘP

	int SILA = 0;
	int SZCZESCIE = 0;
	Sleep(300);
	cout << "*****************************************************" << endl;
	Sleep(300);
	cout << "ForgottenWorld, wersja V1.0   //" << endl;
	Sleep(300);
	cout << "*****************************************************" << endl;
	Sleep(300);
	cout << "Witaj w zapomnianym swiecie. Twoja historia rozpoczyna" << endl;
	Sleep(300);
	cout << "sie po katastrofie statku na ktorym plynales." << endl;
	Sleep(300);
	cout << "Budzisz sie na plazy" << endl;
	Sleep(300);
	cout << endl;

	// Menu

	Sleep(300);
	cout << endl;
	cout << "Czas opowiedziec cos o sobie:" << endl;
	cout << "Podaj swoje imie: "; cin >> strImie;
	cout << "Podaj swoj wiek: "; cin >> nWiek;
	if (nWiek >100 || nWiek <1) {
		cout << "Podano nieprawidłowe dane zacznij grę od nowa";
		return;
	}
	cout << endl;
	Sleep(1000);
	cout << "Nadszedl czas abys wybral klase postaci. Oto wszystkie opcje + statystyki:" << endl;
	cout << endl;

	Sleep(3000);
	cout << "Rycerz:" << endl;
	cout << "Sila: 10" << endl;
	cout << "Zrecznosc: 4" << endl;
	cout << "Magia: 0" << endl;
	cout << "Magia zniszczenia: 0" << endl;
	cout << endl;

	Sleep(2000);
	cout << "Lucznik:" << endl;
	cout << "Sila: 4" << endl;
	cout << "Zrecznosc: 10" << endl;
	cout << "Magia: 0" << endl;
	cout << "Magia zniszczenia: 0" << endl;
	cout << endl;


	// Wybór klasy
	
	cout << "Twoj wybor(1.Rycerz, 2.Lucznik): ";
	cin >> nKlasa;


	if (nKlasa == 1)
	{
		cout << "Wybrales Rycerza" << endl;
		SILA = 10;
		SZCZESCIE = 100;
		cout << "SILA ";  cout << SILA << endl;
		cout << "SZCZESCIE "; cout << SZCZESCIE << endl;
	}
	else {
		cout << "Wybrales Lucznik" << endl;
		SILA = 10;
		SZCZESCIE = 2;
		cout << "Twoje atrybuty to:" + SILA + SZCZESCIE << endl;
	}

	/// <summary>
	/// 
	/// </summary>
	int pula = 10;
	int x = 0;
	int atrybuty;
	

	//ROZDAWANIE ATRYBUTÓW

	cout << "Rozdaj 10 punktów atrybutów" << endl;
	for (1; pula;)
	{
		cout << "Dodaj SILY lub SZCZESCIA:"<<endl;
		cout << "Twoj wybor(1.SILA, 2.SZCZESCIE) : ";
		cin >> atrybuty;
		cout << "Ile punktów chcesz dodac?" ;
		cin >> x;

		if (atrybuty == 1) {
			cout << "Wybrales SILE" << endl;
			SILA += x;
		}
		else
		{
			cout << "Wybrales SZCZESCIE" << endl;
			SZCZESCIE += x;
		}
		pula = pula - x;
		if (pula <= 0) {
			cout << "SILA" << SILA<< endl;
			cout << "SCZESCIE" << SZCZESCIE<< endl;		
		}

	}

	//SKLEP

	int MONETY = 100; 
	int MIECZ = 65;
	int LUK = 55;
	int AMULET = 5;
	int PIERSCIEN = 5;
	int TOPOR_KOWALA = 75;
	int ZBROJA = 25;
	cout << "Witamy w sklepie przywoływaczu" << endl;
	Sleep(300);
	cout << "Twoja zawartość portfela: " << MONETY << " szelingow" << endl;
	int f;

	for (1; 5;)
	{
		int c;
		int max_przedm =0;
		cout << "Dostepne przedmioty: \n (1) MIECZ[65] \n (2) LUK[55] \n (3) AMULET[5] \n (4) PIERSCIEN[5] \n (5) TOPOR_KOWALA[75] \n (6) ZBROJA[25]" << endl;
		cout << "Co wybierasz?";
		cin >> c;
		if(c == 1)
		{
			cout << " Wybrałeś MIECZ"<<endl;
			max_przedm++;
			MONETY = MONETY - MIECZ;
		}
		if(c == 2)
		{
			cout << " Wybrałeś LUK"<<endl;
			max_przedm++;
			MONETY = MONETY - LUK;
		}
		if(c == 3)
		{
			cout << " Wybrałeś AMULET"<<endl;
			max_przedm++;
			MONETY = MONETY - AMULET;
		}
		if(c == 4)
		{
			cout << " Wybrałeś PIERSCIEN"<<endl;
			max_przedm++;
			MONETY = MONETY - PIERSCIEN;
		}
		if(c == 5)
		{
			cout << " Wybrałeś TOPOR_KOWALA"<<endl;
			max_przedm++;
			MONETY = MONETY - TOPOR_KOWALA;
		}
		if(c == 6)
		{
			cout << " Wybrałeś ZBROJA"<<endl;
			max_przedm++;
			MONETY = MONETY - ZBROJA;
		}
		if (max_przedm == 4) {
			break;
		}
		if (MONETY <= 0) {
			cout << "BIDA"<< endl;
			break;
		}
		cout << "Aktualny stan portmany " << MONETY << endl;
	
	
	}
	cout << "Wydałeś wszystko";

	






	



}



