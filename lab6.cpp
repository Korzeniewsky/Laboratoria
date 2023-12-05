#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

struct zad1_punkt {
	float x;
	float y;
};
/*
struct zad1_prostokat{
	float x1;
	float y1;
	float x2;
	float y2;
};

*/

struct zad1_prostokat {
	zad1_punkt punkt1;
	zad1_punkt punkt2;
};


struct zad1_kolo {
	zad1_punkt punkt;
	float r;
};

float zad_2_1(zad1_punkt punkt1, zad1_punkt punkt2) {
	return sqrt(pow(punkt2.x - punkt1.x, 2) + pow(punkt2.y - punkt1.y, 2));
}

float zad_2_2(zad1_prostokat prostokat) {
	return abs(prostokat.punkt2.x - prostokat.punkt1.x) * abs(prostokat.punkt2.y - prostokat.punkt1.y);
}

void zad_2_3(zad1_prostokat prostokat1, zad1_prostokat prostokat2) {
	float rectangle1 = abs(prostokat1.punkt2.x - prostokat1.punkt1.x) * abs(prostokat1.punkt2.y - prostokat1.punkt1.y);
	float rectangle2 = abs(prostokat2.punkt2.x - prostokat2.punkt1.x) * abs(prostokat2.punkt2.y - prostokat2.punkt1.y);
	std::cout << "Prostokat nr 1 ma pole " << rectangle1 << std::endl;
	std::cout << "Prostokat nr 2 ma pole " << rectangle2 << std::endl;
	if (rectangle1 > rectangle2) std::cout << "Prostokat nr 1 ma wieksze pole" << std::endl;
	else if (rectangle1 < rectangle2) std::cout << "Prostokat nr 2 ma wieksze pole" << std::endl;
	else if (rectangle1 > rectangle2) std::cout << "Oba prostokaty maja rowna powierzchnie" << std::endl;
}

float zad_2_4(zad1_kolo kolo) {
	return M_PI * pow(kolo.r, 2);
}

enum polozenie { WspolSr, StyWew, StyZew, RozWew, RozZew, Przec };

polozenie zad_2_5(zad1_kolo kolo1, zad1_kolo kolo2) {
	float R = kolo1.r;
	float r = kolo2.r;
	//float R = kolo1.r > kolo2.r ? kolo1.r : kolo2.r);
	//float r = (kolo1.r < kolo2.r ? kolo1.r : kolo2.r);

	if (kolo1.punkt.x == kolo2.punkt.x && kolo1.punkt.y == kolo2.punkt.y) return WspolSr;

	float s1s2 = zad_2_1({ kolo1.punkt.x, kolo1.punkt.y }, { kolo2.punkt.x, kolo2.punkt.y });
	if (s1s2 == abs(R - r)) return StyWew;
	else if (s1s2 == R + r)	return StyZew;
	else if (s1s2 < abs(R - r)) return RozWew;
	else if (s1s2 > R + r) return RozZew;
	else if (abs(R - r) < s1s2 && s1s2 < R + r) return Przec;
}

int main() {
	polozenie zad_2_5_wynik = zad_2_5({ {0, 0}, 4 }, { {0, 1}, 2 });

	switch (zad_2_5_wynik) {
		case WspolSr:
			std::cout << "Okregi maja wspolny srodek";
			break;
		case StyWew:
			std::cout << "Okregi sa styczne wewnetrznie";
			break;
		case StyZew:
			std::cout << "Okregi sa styczne zewnetrznie";
			break;
		case RozWew:
			std::cout << "Okregi sa rozlaczne wewnetrznie";
			break;
		case RozZew:
			std::cout << "Okregi sa rozlaczne zewnetrznie";
			break;
		case Przec:
			std::cout << "Okregi przecinaja sie w dwoch punktach";
			break;
	}
}