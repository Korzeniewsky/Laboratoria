#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream> 
#include <algorithm>
#include <iomanip>

void funPali(std::string text)
{
	bool palindrom = true;
	for (int i = 0; i < text.length(); i++) {
		if (text[i] != text[text.length() - i - 1]) palindrom = false;
	}
	if (palindrom) std::cout << "Podane wyrazenie to palindrom";
	else std::cout << "Podane wyrazenie to nie palindrom";
}

int fun01(std::string dir) {
	std::ifstream file;
	file.open(dir);

	std::string line;
	int sum = 0;
	int x = 0;
	std::string y;
	do {
		getline(file, line);
		y = line[line.length() - 1];
		x = stoi(y);
		sum += x;
	} while (file);
	file.close();

	return sum;
}

int fun(int TAB[], int N)
{
	int x1 = 0, x2 = 0;
	for (int i = 0; i < N; i++) {
		if (i == 0) x1 == TAB[i];
		else if (i == 1) x2 == TAB[i];
		else {
			if (TAB[i] < x1) {
				x2 = x1;
				x1 = TAB[i];
			}
			else if (TAB[i] < x2) x2 = TAB[i];
		}
	}
	return x1 + x2;
}

void reverse(double tab[], int n) {
	for (int i = 0; i < n / 2; i++) {
		std::swap(tab[i], tab[n - i - 1]);
	}
}


int main()
{
	int H = 0;
	std::cin >> H;
	std::string line;
	for (int i = 0; i < H; i++) {
		line = "";
		for (int j = 0; j < H - i; j++) {
			line += '*';
		}
		for (int j = 0; j < (2 * i) + 1; j++) {
			line += ' ';
		}
		for (int j = 0; j < H - i; j++) {
			line += '*';
		}
		std::cout << std::setw(2);
		std::cout << line << std::endl;
	}
	line = "";
	for (int j = 0; j < H; j++) {
		line += '*';
	}
	line += 'I';
	for (int j = 0; j < H; j++) {
		line += '*';
	}
	std::cout << std::setw(2);
	std::cout << line;
}

