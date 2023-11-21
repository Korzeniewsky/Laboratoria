#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream> 

void zad1(int n, std::string filename)
{
	std::ofstream file;
	file.open(filename);
	for (int i = 0; i < n; i++) {
		file << rand() << std::endl;
	}
	file.close();
}

void zad2(std::string filename)
{
	std::ifstream file;
	file.open(filename);
	char line;
	do {
		line = file.get();
		std::cout << line;
	} while (file);
	file.close();
}

void zad3(int tab[], int n)
{
	std::ifstream file;
	std::string line;
	file.open("test.txt");
	int temp = 0;

	for (int i = 0; i < n; i++) {
		getline(file, line);
		temp = stoi(line);
		tab[i] = temp;
	}
	file.close();
}

int main()
{
	srand(time(NULL));

	//zad.3
	/* 
	int n = 5;
	int tab[5];
	zad3(tab, 5);
	for (int i = 0; i < n; i++) {
		std::cout << tab[i] << std::endl;
	}
	*/

	std::ifstream file;
	std::stringstream ss;
	std::string name, name_min, name_max, temp;
	int age, age_min, age_max = 0;
	int i = 0;
	file.open("zad4.txt");
	do {
		i++;
		getline(file, temp);
		ss << temp;
		ss >> name >> age;
		//std::cout << name << ", " << age << std::endl;
		
		if (i == 1) {
			age_min = age;
			name_min = name;
			age_max = age;
			name_max = name;
		}
		else {
			if (age < age_min) {
				age_min = age;
				name_min = name;
			}
			else if (age > age_max) {
				age_max = age;
				name_max = name;
			}
			else {
				if (age == age_min) {
					name_min += " ";
					name_min += name;
				}
				if (age == age_max) {
					name_max += " ";
					name_max += name;
				}
			}
			
		}

		ss.clear();

	} while (file);
	file.close();
	std::cout << name_min << " " << age_min << std::endl;
	std::cout << name_max << " " << age_max << std::endl;


}

