#include <iostream>
#include <cmath>

int main()
{
	/* Zad.1
	int a = 2;
	int b = 5;

	std::cout << a + b;
	*/

	/* Zad.2
	int a, b{};

	std::cout << "Podaj a: ";
	std::cin >> a;
	std::cout << "Podaj b: ";
	std::cin >> b;
	std::cout << "Suma: " << a + b;
	*/

	/* Zad.3
	float a, b, c{};

	std::cout << "Podaj a: ";
	std::cin >> a;
	std::cout << "Podaj b: ";
	std::cin >> b;
	std::cout << "Podaj c: ";
	std::cin >> c;
	
	if (a != 0) {
		float x = (c - b) / a;
		std::cout << "x wynosi " << x;
	}
	else {
		std::cout << "a nie moze byc rowne 0. To wtedy nie jest rownanie liniowe";
	}
	*/

	/* Zad.4
	float a1, b1, c1, a2, b2, c2{};

	std::cout << "Zaczniemy teraz podawanie wartosci a, b i c do dwoch rownan liniowych o postaci ax + by = c.\nPodaj pierwsze a: ";
	std::cin >> a1;
	std::cout << "Podaj pierwsze b: ";
	std::cin >> b1;
	std::cout << "Podaj pierwsze c: ";
	std::cin >> c1;
	std::cout << "Podaj drugie a: ";
	std::cin >> a2;
	std::cout << "Podaj drugie b: ";
	std::cin >> b2;
	std::cout << "Podaj drugie c: ";
	std::cin >> c2;
	
	float W = (a1 * b2) - (a2 * b1);
	float Wx = (c1 * b2) - (c2 * b1);
	float Wy = (a1 * c2) - (a2 * c1);
	if (W == 0) {
		if (Wx == 0 && Wy == 0) std::cout << "Uklad rownan jest nieoznaczony";
		else std::cout << "Uklad rownan jest sprzeczny";
	} else {
		float x = Wx / W, y = Wy / W;
		std::cout << "x = " << x << ", y = " << y;
	}
	*/
	


	/* Zad.5
	float a, b, c{};

	std::cout << "Podaj a: ";
	std::cin >> a;
	std::cout << "Podaj b: ";
	std::cin >> b;
	std::cout << "Podaj c: ";
	std::cin >> c;

	if (a != 0) {
		float delta = pow(b, 2) - (4 * a * c);
		if (delta > 0) {
			float x1 = (b * (-1) - sqrt(delta)) / 2 * a;
			float x2 = (b * (-1) + sqrt(delta)) / 2 * a;
			std::cout << "x1 = " << x1 << ", x2 = " << x2;
		}
		else if (delta == 0) {
			float x = (b * (-1)) / 2 * a;
			std::cout << "x = " << x;
		}
		else {
			std::cout << "Rownanie nie ma rozwiazan.";
		}
	}
	else {
		std::cout << "a nie moze byc rowne 0. To wtedy nie jest rownanie kwadratowe";
	}
	*/
}

