#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>

int main()
{
	//Zad.1
	/*
	srand(time(NULL));
	int n = 6;
	float tab[6];
	for (int i = 0; i < n; i++) {
		tab[n] = (float)rand()/RAND_MAX;
	}
	*/

	//Zad.2
	/*
	int tab[5] = { 2, 0 ,3, 5, -1 };
	int min = tab[0];
	for (int i = 1; i < 5; i++) {
		if (tab[i] < min) min = tab[i];
	}
	std::cout << min << std::endl;
	*/

	//Zad.3
	/*
	int tab[6] = { 2, 0 ,3, 5, -1 , 6};
	for (int i = 0; i < 6 / 2; i++) {
		std::swap(tab[i], tab[6 - 1 - i]);
	}
	for (int i = 0; i < 6; i++) {
		std::cout << tab[i] << std::endl;
	}
	*/

	//Zad.4
	/*
	int tab[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tab[i][j] = (i + 1) * (j + 1);
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << std::setw(3);
			std::cout << tab[i][j] << " ";
		}
		std::cout << std::endl;
	}
	*/
	
	//Zad.5
	//int tab[6] = { 2, 0, 3, 5, -1, 6 };
	/* bąbelkowe
	for (int i = 0; i < 6 - 1; i++) {
		for (int j = 0; j < 6 - 1 - i; j++)
			if (tab[j] > tab[j + 1]) std::swap(tab[j], tab[j + 1]);
	}

	for (int i = 0; i < 6; i++) {
		std::cout << tab[i] << std::endl;
	}
	*/
	/* wybieranie
	int min_val = 0, min_idx = 0;
	for (int i = 0; i < 6 - 1; i++) {
		min_idx = i;
		min_val = tab[i];
		for (int j = i + 1; j < 6; j++)
			if (tab[j] < min_val) {
				min_idx = j;
				min_val = tab[j];
			}
		tab[min_idx] = tab[i];
		tab[i] = min_val;
	}

	for (int i = 0; i < 6; i++) {
		std::cout << tab[i] << std::endl;
	}
	*/
	/* wstawianie
	for (int i = 1; i < 6; i++) {
		for (int j = i - 1; j >= 0; j--)
			if (tab[j] > tab[j + 1]) std::swap(tab[j], tab[j + 1]);
	}

	for (int i = 0; i < 6; i++) {
		std::cout << tab[i] << std::endl;
	}
	*/

	//Zad.6
	/*
	int x = 3;

	int** tab = new int* [x];
	for (int i = 0; i < x; i++) {
		tab[i] = new int[x];
	}

	int n = 0;
	int xp = 0, yp = 0, xk = x - 1, yk = x - 1;

	while (n != pow(x, 2)) {
		for (int i = xp; i <= xk; i++) {
			n++;
			tab[yp][i] = n;
		}
		if (n == pow(x, 2)) break;
		yp++;
		for (int i = yp; i <= yk; i++) {
			n++;
			tab[i][yk] = n;
		}
		xk--;
		for (int i = xk; i >= xp; i--) {
			n++;
			tab[yk][i] = n;
		}
		yk--;
		for (int i = yk; i >= yp; i--) {
			n++;
			tab[i][xp] = n;
		}
		xp++;
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			std::cout << std::setw(4);
			std::cout << tab[i][j] << " ";
		}
		std::cout << std::endl;
	}
	*/
}
