//napisz program, ktory: pobiera od uzytkownika liczbe calkowita i wyswietla komunikat "Liczba dodatnia" jesli liczba jest wieksza od zera, sprawdza, czy liczba jest parzysta, czy nieparzysta. sprawdza, czy liczba znajduje sie w przedziale od 10 do 50 (włącznie). sprawdza, czy liczba jest dodatnia, ujemna lub jest zerem, a jeśli dodatnia - sprwadza, czy jest parzysta. wypisze trzy wprowadzone iczby w kolejnosci rosnacej.
#include<iostream>
using namespace std;

void zadanie1() {
    int liczba;
    cout << "Zadanie 1: Pobierz liczbe calkowita i sprawdz czy dodatnia\n";
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    if (liczba > 0) {
        cout << "Liczba dodatnia" << endl;
    } else {
        cout << "Liczba nie jest dodatnia" << endl;
    }
}

void zadanie2() {
    int liczba;
    cout << "Zadanie 2: Sprawdz czy liczba jest parzysta\n";
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    if (liczba % 2 == 0) {
        cout << "Liczba parzysta" << endl;
    } else {
        cout << "Liczba nieparzysta" << endl;
    }
}

void zadanie3() {
    int liczba;
    cout << "Zadanie 3: Sprawdz czy liczba jest w przedziale 10-50\n";
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    if (liczba >= 10 && liczba <= 50) {
        cout << "Liczba w przedziale 10-50" << endl;
    } else {
        cout << "Liczba poza przedzialem 10-50" << endl;
    }
}

void zadanie4() {
    int liczba;
    cout << "Zadanie 4: Sprawdz czy liczba jest dodatnia, ujemna lub zerem, a jesli dodatnia - czy parzysta\n";
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    if (liczba > 0) {
        cout << "Liczba dodatnia";
        if (liczba % 2 == 0) {
            cout << " i parzysta" << endl;
        } else {
            cout << " i nieparzysta" << endl;
        }
    } else if (liczba < 0) {
        cout << "Liczba ujemna" << endl;
    } else {
        cout << "Liczba zerowa" << endl;
    }
}

void zadanie5() {
    int liczby[3];
    cout << "Zadanie 5: Wprowadź trzy liczby i wypisz je w kolejności rosnącej\n";
    for (int i = 0; i < 3; i++) {
        cout << "Podaj liczbe " << i + 1 << ": ";
        cin >> liczby[i];
    }
    // Sortowanie
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (liczby[i] > liczby[j]) {
                swap(liczby[i], liczby[j]);
            }
        }
    }
    cout << "Liczby w kolejnosci rosnacej: ";
    for (int i = 0; i < 3; i++) {
        cout << liczby[i] << " ";
    }
    cout << endl;
}

int main() {
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    zadanie5();
    return 0;
}