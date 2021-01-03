#pragma warning(disable:4996)

#include <conio.h>
#include <string.h>
#include <iostream>

/* Created by Rizky Khapidsyah */

using namespace std;

int main() {
	char huruf[20];
	char pindah[20];
	
	cout << "Masukkan Sembarang Kata = ";
	gets_s(huruf);
	cout << "Panjang Kata Yang Diinputkan = ";
	cout << strlen(huruf);
	
	_getch();
	return 0;
}