#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
//Zad1
/*
	int liczba;
	int tab[10];
	for (int i = 0; i < 10; i++) {
		cout << "Podaj liczbe calkowita: ";
		cin >> liczba;
		 tab[i] = liczba;
		cout << "Wartosc: " << tab[i] << endl;
}
	cout << "Wartosci w odwrotnej kolejnosci: " << endl;
	for (int i = 9; i>= 0; i--) {
		cout << "Wartosc: " << tab[i] << endl;
	}
	*/
//Zad2
	/*
	int n;
	cout << "Ciag liczb Fibonacciego:" << endl;
	cout << "0" << endl;
	cout << "1" << endl;
	cout << "Ile kolejnych liczb chcesz wyznaczyc? ";
	cin >> n;
	int* tab = new int[n];
	
	for (int i = 2; i < n; i++) {
		tab[0] = 0;
		tab[1] = 1;
		tab[i] = tab[i - 2] + tab[i - 1];
		cout << tab[i] << endl;
	}
	*/
//Zad3
	/*
	int tab[10];
	int suma = 0;
	int wynik = 0;
	int mniejsze = 0;
	int mniej;
	int wieksze;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		tab[i] = rand();
		cout << "Wylosowana wartosc: " << tab[i] << endl;
		suma += tab[i];
	}
	wynik = suma / 10;
	for (int i = 0; i < 10; i++) {
		if (tab[i] < wynik) {
			mniejsze=mniejsze+1;
		}
	}
	cout << "Srednia arytmetczna wylosowanych wartosci wynosi: " << wynik << endl;
	cout << "Ilosc wylosowanych wartosci mniejszych od sredniej wynosi: " << mniejsze<< endl;
	mniej = tab[0];
	wieksze = tab[0];
	for (int i = 1; i < 10; i++) {
		if (tab[i] < mniej) {
			mniej = tab[i];

		}
		if (tab[i] > wieksze) {
			wieksze = tab[i];
		}
	}
	cout << "Najmniejsza wylosowana wartosc: " << mniej << endl;
	cout << "Najwieksza wylosowana wartosc: " << wieksze << endl;
	*/
	//Zad4
	/*
	int tab[10];
	int n;
	int suma = 0;
	double srednia = 0;
	int mniejsza;
	int wieksza;
	cout << "Ile liczb chcesz wprowadzic? (od 1 do 10)";
	cin >> n;
	for (int i = 0; i < 10; i++) {
		if (i >= n) {
			tab[i] = 0;
		}
		else {
			cout << "Podaj liczbe calkowita: ";
			cin >> tab[i];
		}
		suma = suma + tab[i];
	}
	for (int i = 0;i < 10;i++) {
		cout << tab[i] << "\t";
	}
	srednia = suma / 10.0;
	cout << "\n";
	cout << "Srednia wartosc dla elementow tablicy: " << srednia << endl;
	mniejsza = tab[0];
	wieksza = tab[0];
	for (int i = 0; i < 10; i++) {
		if (tab[i] < mniejsza) {
			mniejsza = tab[i];
		}
		if (tab[i] > wieksza) {
			wieksza = tab[i];
		}
	}
	cout << "Wartosc maksymalna: " << wieksza << endl;
	cout << "Wartosc mninimalna: " << mniejsza << endl;
	*/
/*
//Zad5
int tab[10];
int los;
int suma = 0;
srand(time(NULL));
for (int i = 0;i < 10;i++) {
	tab[i] = rand() % 11 + 0;
	cout << tab[i] << "\t";
}
cout << "\n";
los = rand() % 11 + 0;
cout << "Wylosowana liczba to: " << los << endl;
for (int i = 0;i < 10;i++) {
	if (tab[i] == los) {
		suma += 1;
	}
}
cout << "Wylosowana liczba pojawia sie w tablicy " << suma << " razy." << endl;
*/
//Zad9
/*
int liczba;
int tab[10];
int wieksze;
for (int i = 0; i < 10; i++) {
	cout << "Podaj liczbe calkowita: ";
	cin >> liczba;
	tab[i] = liczba;
	
}
for (int j = 0; j < 10; j++) {
	for (int i = 0;i< 9-j;i++) {
		if (tab[i] > tab[i + 1]) {
			wieksze = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = wieksze;
		}
	}
}
cout << "Uporzadkowana tablica: " << endl;
for (int i = 0; i < 10; i++) {
	cout << tab[i] << "\t";
}
	*/
//
}