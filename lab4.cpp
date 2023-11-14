#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <algorithm>

float zad1(float x)
{
	return pow(x, 3.0);
}
float zad2(float x, int n)
{
	return pow(x, n);
}

float zad3(float x1, float y1, float x2, float y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int zad4(std::string txt)
{
	int counter = 0;
	for (int i = 0; i < txt.length(); i++) {
		if (txt[i] == 'a') counter++;
	}
	return counter;
}

std::string zad6(std::string txt)
{
	for (int i = 0; i < txt.length() / 2; i++) {
		std::swap(txt[i], txt[txt.length() - 1 - i]);
	}
	return txt;
}

std::string zad7(std::string txt)
{
	std::string txt2 = "";
	int x = 0;

	for (int i = 0; i < txt.length(); i++) {
		txt2 += " ";
	}

	for (int i = 0; i < txt.length(); i++) {
		do {
			x = (rand() % txt.length());
			if (txt2[x] == ' ') break;
		} while (1);
		txt2[x] = txt[i];
	}
	return txt2;
}

struct dane 
{
	std::string imie;
	std::string nazwisko;
	int wiek;
};

dane zad8() 
{
	dane x;
	std::cout << "Wprowadz imie: ";
	std::cin >> x.imie;
	std::cout << "Wprowadz nazwisko: ";
	std::cin >> x.nazwisko;
	std::cout << "Wprowadz wiek: ";
	std::cin >> x.wiek;

	return x;
}

void zad10(int dlugosc)
{
	int tab[6] = { 0, 3, 1, 5, 2, 4 };

	if (dlugosc == 1) {
		std::cout << tab[0];
	}
	else {
		std::cout << tab[dlugosc - 1] << ", ";
		zad10(dlugosc - 1);
	}

}

int main()
{
	srand(time(NULL));
	zad10(6);

	//zad.8
	//dane osoba;
	//osoba = zad8();

	
}

