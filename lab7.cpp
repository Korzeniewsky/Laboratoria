#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

std::vector <int> zad_1(std::vector <int> wektor) {
	int n = 0;
	std::cout << "Podaj ile elementow ma miec wektor: ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		wektor.push_back(rand());
	}
	return wektor;
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

std::vector <int> zad_4(std::vector <int> wektor) {
	std::sort(wektor.begin(), wektor.end());
	return wektor;
}

struct zad5_punkt {
	float x;
	float y;
};

struct zad5_kolo {
	zad5_punkt punkt;
	float r;
};



int main() {
	srand(time(NULL));
	std::vector <int> wektor;
	wektor = zad_1(wektor);
	zad_2(wektor);
	zad_3(wektor);
	wektor = zad_4(wektor);
	zad_2(wektor);
}