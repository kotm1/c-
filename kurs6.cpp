#include <iostream>
using namespace std;

void odwrotna_kolejnosc() {
    int tab[8];
    cout << "Podaj 8 liczb: ";
    for (int i = 0; i < 8; i++) {
        cin >> tab[i];
    }
    cout << "Liczby w odwrotnej kolejnosci: ";
    for (int i = 7; i >= 0; i--) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

void parzyste_nieparzyste() {
    int tab[10];
    cout << "Podaj 10 liczb: ";
    for (int i = 0; i < 10; i++) {
        cin >> tab[i];
    }
    cout << "Liczby parzyste: ";
    for (int i = 0; i < 10; i++) {
        if (tab[i] % 2 == 0) cout << tab[i] << " ";
    }
    cout << "\nLiczby nieparzyste: ";
    for (int i = 0; i < 10; i++) {
        if (tab[i] % 2 != 0) cout << tab[i] << " ";
    }
    cout << endl;
}

void srednia_dodatnich() {
    int tab[10];
    cout << "Podaj 10 liczb: ";
    for (int i = 0; i < 10; i++) {
        cin >> tab[i];
    }
    int suma = 0, licznik = 0;
    for (int i = 0; i < 10; i++) {
        if (tab[i] > 0) {
            suma += tab[i];
            licznik++;
        }
    }
    if (licznik > 0) {
        double srednia = (double)suma / licznik;
        cout << "Srednia dodatnich: " << srednia << endl;
    } else {
        cout << "Brak dodatnich wartosci w tablicy." << endl;
    }
}

void porownaj_tablice() {
    int t1[5], t2[5];
    cout << "Podaj 5 liczb do pierwszej tablicy: ";
    for (int i = 0; i < 5; i++) cin >> t1[i];
    cout << "Podaj 5 liczb do drugiej tablicy: ";
    for (int i = 0; i < 5; i++) cin >> t2[i];
    bool identyczne = true;
    for (int i = 0; i < 5; i++) {
        if (t1[i] != t2[i]) {
            identyczne = false;
            break;
        }
    }
    if (identyczne) cout << "Tablice sa identyczne." << endl;
    else cout << "Tablice NIE sa identyczne." << endl;
}

void wieksze_od_sredniej() {
    int tab[10];
    cout << "Podaj 10 liczb: ";
    for (int i = 0; i < 10; i++) cin >> tab[i];
    int suma = 0;
    for (int i = 0; i < 10; i++) suma += tab[i];
    double srednia = (double)suma / 10;
    cout << "Srednia: " << srednia << endl;
    cout << "Liczby wieksze od sredniej: ";
    for (int i = 0; i < 10; i++) {
        if (tab[i] > srednia) cout << tab[i] << " ";
    }
    cout << endl;
}

int main() {
    odwrotna_kolejnosc();
    parzyste_nieparzyste();
    srednia_dodatnich();
    porownaj_tablice();
    wieksze_od_sredniej();
    return 0;
}
