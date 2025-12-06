#include <iostream>
using namespace std;

int main() {
    // 1. Liczby od 1 do 10 za pomocą for
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2. Liczby parzyste od 2 do 20 przy użyciu while
    int j = 2;
    while (j <= 20) {
        cout << j << " ";
        j += 2;
    }
    cout << endl;

    // 3. Liczby od 100 do 1 w odwrotnej kolejności, używając for
    for (int k = 100; k >= 1; k--) {
        cout << k << " ";
    }
    cout << endl;

    // Suma liczb od 1 do 100 z wykorzystaniem pętli for
    int suma = 0;
    for (int i = 1; i <= 100; i++) {
        suma += i;
    }
    cout << "Suma liczb od 1 do 100: " << suma << endl;

    // Wypisanie kwadratów liczb od 1 do 10
    cout << "Kwadraty liczb od 1 do 10: ";
    for (int i = 1; i <= 10; i++) {
        cout << i * i << " ";
    }
    cout << endl;

    // Pobieranie liczb od użytkownika dopóki nie wpisze 0 (do...while)
    int liczba;
    do {
        cout << "Podaj liczbe (0 aby zakonczyc): ";
        cin >> liczba;
        if (liczba != 0) {
            cout << "Wprowadziles: " << liczba << endl;
        }
    } while (liczba != 0);

    return 0;
}