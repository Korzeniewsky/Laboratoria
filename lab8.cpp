#include <iostream>
#include <cmath>
#include <ctime>
void my_swap_1(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

struct Punkt {
	float x;
	float y;
};

void movex(Punkt* a, double ix) {
	a->x += ix;
}

void zad6(float tab[], int n, int A, int B) {
	for (int i = 0; i < n; i++) {
		tab[i] = (rand() % (B - A + 1)) + A;
	}
}

int main() {
	srand(time(NULL));

	int n = 0;
	std::cin >> n;
	float* tab = new float[n];

	zad6(tab, n, 16, 32);

	for (int i = 0; i < n; i++) {
		std::cout << *(tab + i) << " ";
	}
	delete[] tab;


	//Punkt punkt1{ 0, 0 };
	//Punkt* punkt2 = new Punkt[2];
	//punkt2[0] = { 3, 4 };
	//punkt2[1] = { 1, 1 };
	//double przesuniecie = 4.5;

	//std::cout << sqrt(pow(punkt2[0].x - punkt1.x, 2) + pow(punkt2[0].y - punkt1.y, 2)) << std::endl;
	//std::cout << sqrt(pow(punkt2[1].x - punkt1.x, 2) + pow(punkt2[1].y - punkt1.y, 2)) << std::endl;
	
	//movex(&punkt1, przesuniecie);
	//std::cout << punkt1.x << std::endl;
	
	/*int a = 9, b = 22;
	int* aa = &a;
	int* bb = &b;
	std::cout << *aa << " " << *bb << std::endl;
	my_swap_1(aa, bb);
	std::cout << *aa << " " << *bb << std::endl;*/

	/*int num1 = 3;
	int* num2 = &num1;
	int& num3 = num1;

	std::cout << num1 << std::endl;
	*num2 *= 3;
	std::cout << num1 << std::endl;
	num3 *= 3;
	std::cout << num1 << std::endl;*/

	//delete[] punkt2;

	
}

