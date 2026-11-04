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
//Zad6
/*
int r;
int w;
cout << "Podaj rozmiar macierzy kwadratowej ";
cin >> r;
int** A = new int* [r];
int** B = new int* [r];
int** C = new int* [r];
for (int i = 0;i < r;i++) {
	A[i] = new int[r];
	B[i] = new int[r];
	C[i] = new int[r];
}
cout << "Wprowadz elementy pierwszej macierzy: " << endl;
for (int i = 0;i < r;i++) {
	for (int j = 0;j < r;j++) {
		
		cin >> w;
		A[i][j] = w;
	}
}

cout << "Wprowadz elementy drugiej macierzy: " << endl;
for (int i = 0;i < r;i++) {
	for (int j = 0;j < r;j++) {
		
		cin >> w;
		B[i][j] = w;
	}
	
}
cout << "Pierwsza macierz: " << endl;
for (int i = 0;i < r;i++) {
	for (int j = 0;j < r;j++) {
		cout << A[i][j] << "\t";
	}
	cout << endl;
}
cout << "Druga macierz: " << endl;
for (int i = 0;i < r;i++) {
	for (int j = 0;j < r;j++) {
		cout << B[i][j] << "\t";
	}
	cout << endl;
}
cout << "Macierz wynikowa: " << endl;
for (int i = 0;i < r;i++) {
	for (int j = 0;j < r;j++) {
		C[i][j] = A[i][j] + B[i][j];
		cout << C[i][j] << "\t";
	}
	cout << endl;
}
*/
//Zad7

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
//Zad10
/*
srand(time(NULL));
int tab[8][8];
int sumaw[8] = {0};
int sumak[8] = {0};
int suma = 0;
for (int i = 0;i < 8;i++) {
	for (int j = 0;j < 8;j++) {
		tab[i][j] = rand() % 101 + 0;
		cout << tab[i][j] << "\t";
	}
	cout << endl;
}
for (int i = 0;i < 8;i++) {
	for (int j = 0;j < 8;j++) {
		sumaw[i] = sumaw[i] + tab[i][j];

	}
	cout << "Suma elementow " << i + 1 << "wiersza, wynosi: " << sumaw[i] << endl;
}
 for (int j = 0;j < 8;j++){
	for (int i = 0;i < 8;i++) {
		sumak[j] = sumak[j] + tab[i][j];

	}
	cout << "Suma elementow " << j + 1 << "kolumny, wynosi: " << sumak[j] << endl;
}
 for (int i = 0;i < 8;i++) {
	 for (int j = 0;j < 8;j++) {
		 suma = suma + tab[i][j];
	 }
 }
 cout << "Suma wszystkich elementow macierzy wynosi: " << suma << endl;
 */
//Zad11
/*
srand(time(NULL));
int tab[8][6];
int wieksz = 0;
int mniejsz = 0;
int a = 0;
int b = 0;
int c = 0;
int d = 0;
for (int i = 0;i < 8;i++) {
	for (int j = 0;j < 6;j++) {
		tab[i][j] = rand() % 101 + 0;
		cout << tab[i][j] << "\t";
	}
	cout << endl;
}
wieksz = tab[0][0];
mniejsz = tab[0][0];
for (int i = 0;i < 8;i++) {
	for (int j = 0;j < 6;j++) {
		
		if (tab[i][j] < mniejsz) {
			mniejsz = tab[i][j];
			a = i + 1;
			b = j + 1;
		}
		if (tab[i][j] > wieksz) {
			wieksz = tab[i][j];
			c = i + 1;
			d = j + 1;
		}
	}
}
cout << "Najwieksza wartosc w macierzy to " << wieksz << ", na pozycji " << c <<" " << d << endl;
cout << "Najmniejsza wartosc w macierzy to " << mniejsz << ", na pozycji " << a <<" " << b << endl;
*/
//Zad12
//Zad13
/*
srand(time(NULL));
int tab[5][5];
bool symetryczna = true;
for (int i = 0;i < 5;i++) {
	for (int j = 0;j <5 ;j++) {
		tab[i][j] = rand() % 10 + 0;
		cout << tab[i][j] << "\t";
	}
	cout << endl;
}
for (int i = 0;i < 5;i++) {
	for (int j = 0;j < 5;j++) {
		if (tab[i][j] != tab[j][i]) {
			symetryczna = false;
			break;
		}
	}
}
	if(symetryczna){
	cout << "Macierz jest symetryczna!" << endl;
		}
	else {
	cout << "Macierz nie jest symetryczna!" << endl;
		}
*/
//Zad14
/*
srand(time(NULL));
int tab[6][6];
int k;
for (int i = 0;i < 6;i++) {
	for (int j = 0;j < 6;j++) {
		tab[i][j] = rand() % 101 + 0;
		cout << tab[i][j] << "\t";
	}
	cout << endl;
}
cout << "Przez jaka liczbe chcesz pomnozyc macierz? ";
cin >> k;
cout << "Macierz wynikowa: " << endl;
for (int i = 0;i < 6;i++) {
	for (int j = 0;j < 6;j++) {
		tab[i][j] = k * tab[i][j];
		cout << tab[i][j] << "\t";
	}
	cout << endl;
}
*/
//Zad 15
/*
srand(time(NULL));
int tab[8][4];
int l;
int razem = 0;
for (int i = 0;i < 8;i++) {
	for (int j = 0;j < 4;j++) {
		tab[i][j] = rand() % 101 + 0;
		cout << tab[i][j] << "\t";
	}
	cout << endl;
}
cout << "Jaka liczbe chcesz znalezc?(od 0 do 100) ";
cin >> l;
for (int i = 0;i < 8;i++) {
	for (int j = 0;j < 4;j++) {
		if (l == tab[i][j]) {
			cout << "Liczba znaleziona na pozycji: " << i+1 << j+1 << endl;
			razem++;
		}
		
	}
}
if(razem==0) {
cout << "Nie znaleziono podanej liczby w macierzy!" << endl;
}
else {
	cout << "Liczbe znaleziono w macierzy " << razem << " razy." << endl;
}
*/
//Zad16
/*
srand(time(NULL));
int tab[5][5];
bool jednostkowa = true;
for (int i = 0;i < 5;i++) {
	for (int j = 0;j < 5;j++) {
		tab[i][j] = rand() % 2 + 0;
		cout << tab[i][j] << "\t";
	}
	cout << endl;
}
for (int i = 0;i < 5;i++) {
	for (int j = 0;j < 5;j++) {
		if (i == j && tab[i][j] != 1) {
			jednostkowa = false;
			break;
		}
		if (i != j && tab[i][j] != 0) {
			jednostkowa = false;
			break;
		}
	}
}
if (jednostkowa) {
	cout << "Macierz jest jednostkowa!" << endl;
}
else {
	cout << "Macierz nie jest jednostkowa!" << endl;
}
*/
//Zad17

}