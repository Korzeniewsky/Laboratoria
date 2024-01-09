#include <iostream>
#include <fstream>
#include <map>
#include <ctime>


int main() {
    srand(time(NULL));

    std::ifstream file;
    std::string word;
    std::map <std::string, int> slowa;
    int liczba = 0, rand_liczba = 0;

    file.open("beemovie.txt");

    // Zliczanie słów
    if (file) {
        while (file >> word)
        {
            liczba++;
            slowa[word]++;
        }
        file.close();
    }

    // Wypisanie słów i ich częstotliwości
    for (const auto p : slowa)
    {
        std::cout << p.first << " " << p.second << std::endl;
    }

    // Generowanie zdań z losowych słów
    for (int i = 0; i < 10; i++) {
        int x = 0;
        rand_liczba = 1 + (rand() % liczba);
        for (const auto p : slowa)
        {
            x += p.second;
            if (x >= rand_liczba) {
                std::cout << p.first << " ";
                break;
            }
        }
    }
    

}

