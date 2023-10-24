#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    //zad.1
    /*
    int n = 0;
    std::cin >> n;
    std::cout << std::endl;
    for (int i = 1; i <= n; i++) {
        std::cout << i << std::endl;
    }
    */

    //zad.2
    /*
    int n = 0;
    std::cin >> n;
    std::cout << std::endl;
    while (n > 0) {
        std::cout << n << std::endl;
        n--;
    }
    */

    //zad.3
    /*
    int x = 0, minimum = 0, maximum = 0;
    float n = 0.0, sum = 0.0;
    char end = 'n';
    do {
        std::cout << end;
        std::cout << "Podaj liczbe: ";
        std::cin >> x;
        n++;
        if (n == 1) {
            minimum = x;
            maximum = x;
        }
        else {
            if (x < minimum) minimum = x;
            if (x > maximum) maximum = x;
        }
        sum += x;
        
        std::cout << "Czy to juz koniec podawania liczb? (T/N)";
        std::cin >> end;
    } while (end != 'T' && end != 't');
    std::cout << "Najmniejsza liczba: " << minimum << "\nNajwieksza liczba: " << maximum << "\nSrednia: " << sum / n << std::endl;
    */

    //zad.4
    /*
    int minimum = 0, maximum = 0;
    int k = 0;
    char end = 'n';
    bool found = false;

    std::cout << "W jakim przedziale miesci sie Twoja liczba?" << std::endl;
    std::cout << "Od:";
    std::cin >> minimum;
    std::cout << "Do:";
    std::cin >> maximum;

    if (minimum > maximum) std::cout << "Zly zakres";
    else {
        while (minimum < maximum) {
            std::cout << minimum << " " << maximum << " " << k << std::endl;
            k = (minimum + maximum) / 2;
            std::cout << "Czy Twoja liczba jest mniejsza lub rowna " << k << "? (T/N) ";
            std::cin >> end;
            if (end == 't' || end == 'T') {
                maximum = k;
            }
            else {
                minimum = k + 1;
            }
        }
        std::cout << "Teraz juz wiem! Twoja liczba to " << minimum;
    }
    */

    //zad.5 
    /*
    int n = 0, a1 = 0, q = 0, x = 0, suma = 0, suma_ogolna = 0;
    std::cout << "Podaj a1: ";
    std::cin >> a1;
    std::cout << "Podaj q: ";
    std::cin >> q;
    std::cout << "Podaj ile wyrazow ciagu chcesz zobaczyc: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        x = a1 * pow(q, i - 1);
        suma += x;
        std::cout << x << std::endl;
    }
    if (q == 1) suma_ogolna = a1 * n;
    else suma_ogolna = a1 * (1 - pow(q, n)) / (1 - q);

    std::cout << "Suma wypisanych wyrazow: " << suma << std::endl;
    std::cout << "Do porownania z suma ogolna: " << suma_ogolna << std::endl;
    */

    //zad.6
    /*
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            std::cout << std::setw(3);
            std::cout << i * j << " ";
        }
        std:: cout << std::endl;
    }
    */

    //zad.7 niedokonczone
    /*
    int n = 0;
    std::cout << "Podaj rozmiar iksa: ";
    std::cin >> n;
    char** tablica = new char* [n];

    for (int i = 0; i < n; i++) {
        tablica[i] = new char[n];
        for (int j = 0; j < n; j++) {
            tablica[i][j] = 'O';
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tablica[i][j] = 'X';
            tablica[i][n - 1 - j] = 'X';
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << tablica[i][j];
        }
        std::cout << std::endl;
    }
    */
}
