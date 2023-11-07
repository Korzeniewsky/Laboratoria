#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>

int main()
{
	/* Zad.1
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



	int tab[9][9];

	int n = 0;
	int xp = 0, yp = 0, xk = 8, yk = 8;

	while (n != 81) {
		for (int i = xp; i <= xk; i++) {
			n++;
			tab[yp][i] = n;
		}
		if (n == 81) break;
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

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			std::cout << std::setw(4);
			std::cout << tab[i][j] << " ";
		}
		std::cout << std::endl;
	}
	

}
