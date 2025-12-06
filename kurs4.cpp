#include <iostream>
using namespace std;

int main() {
    // Silnia
    int n;
    cout << "Podaj liczbe n do obliczenia silni: ";
    cin >> n;
    unsigned long long silnia = 1;
    for (int i = 1; i <= n; i++) {
        silnia *= i;
    }
    cout << n << "! = " << silnia << endl;

    // Suma cyfr liczby
    int liczba;
    cout << "Podaj liczbe do obliczenia sumy cyfr: ";
    cin >> liczba;
    int suma_cyfr = 0, temp = liczba;
    while (temp != 0) {
        suma_cyfr += temp % 10;
        temp /= 10;
    }
    cout << "Suma cyfr liczby " << liczba << " to: " << suma_cyfr << endl;

    // Sprawdzenie czy liczba jest pierwsza
    cout << "Podaj liczbe do sprawdzenia czy jest pierwsza: ";
    cin >> liczba;
    bool pierwsza = true;
    if (liczba < 2) pierwsza = false;
    for (int i = 2; i * i <= liczba; i++) {
        if (liczba % i == 0) {
            pierwsza = false;
            break;
        }
    }
    if (pierwsza) {
        cout << liczba << " jest liczba pierwsza." << endl;
    } else {
        cout << liczba << " nie jest liczba pierwsza." << endl;
    }

    // Tabliczka mnożenia
    cout << "Podaj liczbe do tabliczki mnozenia: ";
    cin >> liczba;
    cout << "Tabliczka mnozenia dla " << liczba << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << liczba << " x " << i << " = " << liczba * i << endl;
    }

    return 0;
}
