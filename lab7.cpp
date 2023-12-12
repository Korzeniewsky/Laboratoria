#define _USE_MATH_DEFINES
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>


void zad_1(std::vector <int> & wektor) {
	int n = 0;
	std::cout << "Podaj ile elementow ma miec wektor: ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		wektor.push_back(rand());
	}
}

void zad_2(std::vector <int> wektor) {
	for (int i = 0; i < wektor.size(); i++) {
		std::cout << wektor[i] << std::endl;
	}
}

void zad_3(std::vector <int> wektor) {
	int min = 0, max = 0;
	for (int i = 0; i < wektor.size(); i++) {
		if (i == 0) {
			min = wektor[i];
			max = wektor[i];
		}
		else {
			if (wektor[i] > max) max = wektor[i];
			else if (wektor[i] < min) min = wektor[i];
		}
	}
	std::cout << "Najmniejsza liczba: " << min << std::endl;
	std::cout << "Najwieksza liczba: " << max << std::endl;
}

void zad_4(std::vector <int> & wektor) {
	std::sort(wektor.begin(), wektor.end());
}

struct zad5_punkt {
	float x;
	float y;
};

struct zad5_kolo {
	zad5_punkt punkt;
	float r;
};

void zad_5_a(std::vector <zad5_kolo> & kola) {
	int n = 0;
	std::cout << "Podaj ile kol ma miec wektor: ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		zad5_kolo kolo = { {rand(), rand()}, rand() };
		kola.push_back(kolo);
	}
}

int zad_5_b(std::vector <zad5_kolo> kola) {
	float min = 0;
	int min_idx = 0;
	for (int i = 0; i < kola.size(); i++) {
		float pole = M_PI * pow(kola[i].r, 2);
		std::cout << i << " " << pole << std::endl;
		if (i == 0) min = pole;
		else if (pole < min) {
			min = pole;
			min_idx = i;
		}
	}
	return min_idx;
}

void zad_2x(std::vector <zad5_kolo> wektor) {
	for (int i = 0; i < wektor.size(); i++) {
		std::cout << " " << wektor[i].punkt.x << " " << wektor[i].punkt.y << " " << wektor[i].r << std::endl;
	}
}

int main() {
	srand(time(NULL));
	//std::vector <int> wektor;
	std::vector <zad5_kolo> kola;
	//zad_1(wektor);
	//zad_2(wektor);
	//zad_3(wektor);
	//zad_4(wektor);
	//zad_2(wektor);
	zad_5_a(kola);
	zad_2x(kola);
	std::cout << zad_5_b(kola);
}
