#include <iostream>
#include <cmath>
using namespace std;

void srednia_predkosc() {
    double dystans, czas;
    cout << "Podaj dystans (km): ";
    cin >> dystans;
    cout << "Podaj czas podróży (h): ";
    cin >> czas;
    if (czas > 0) {
        double predkosc = dystans / czas;
        cout << "Srednia predkosc: " << predkosc << " km/h" << endl;
    } else {
        cout << "Czas musi byc wiekszy od zera!" << endl;
    }
}

void pole_prostokata_przekatna() {
    double dlugosc, szerokosc;
    cout << "Podaj dlugosc prostokata: ";
    cin >> dlugosc;
    cout << "Podaj szerokosc prostokata: ";
    cin >> szerokosc;
    double pole = dlugosc * szerokosc;
    double przekatna = sqrt(dlugosc * dlugosc + szerokosc * szerokosc);
    cout << "Pole prostokata: " << pole << endl;
    cout << "Przekatna prostokata: " << przekatna << endl;
}

void sekundy_na_godziny_minuty_sekundy() {
    int sekundy;
    cout << "Podaj liczbe sekund: ";
    cin >> sekundy;
    int godziny = sekundy / 3600;
    int minuty = (sekundy % 3600) / 60;
    int sekundy_pozostale = sekundy % 60;
    cout << godziny << " h, " << minuty << " min, " << sekundy_pozostale << " s" << endl;
}

void zuzycie_energii() {
    double moc, godziny, cena;
    cout << "Podaj moc urzadzenia (W): ";
    cin >> moc;
    cout << "Podaj liczbe godzin pracy dziennie: ";
    cin >> godziny;
    cout << "Podaj cene 1 kWh: ";
    cin >> cena;
    double zuzycie_miesieczne = moc * godziny * 30 / 1000.0;
    double koszt = zuzycie_miesieczne * cena;
    cout << "Miesieczne zuzycie energii: " << zuzycie_miesieczne << " kWh" << endl;
    cout << "Koszt miesieczny: " << koszt << " zl" << endl;
}

void podatek_dochodowy() {
    double dochod;
    cout << "Podaj kwote dochodu: ";
    cin >> dochod;
    double podatek = 0;
    if (dochod <= 30000) {
        podatek = dochod * 0.12;
    } else {
        podatek = 30000 * 0.12 + (dochod - 30000) * 0.32;
    }
    cout << "Nalezny podatek: " << podatek << " zl" << endl;
}

void farba_do_pokoju() {
    double dlugosc, wysokosc, wydajnosc;
    cout << "Podaj dlugosc pokoju (m): ";
    cin >> dlugosc;
    cout << "Podaj wysokosc pokoju (m): ";
    cin >> wysokosc;
    cout << "Ile m^2 mozna pomalowac 1 litrem farby: ";
    cin >> wydajnosc;
    double powierzchnia = dlugosc * wysokosc * 4; // zakładamy 4 ściany
    double litry = powierzchnia / wydajnosc;
    cout << "Potrzebujesz " << ceil(litry) << " litrow farby." << endl;
}

int main() {
    srednia_predkosc();
    pole_prostokata_przekatna();
    sekundy_na_godziny_minuty_sekundy();
    zuzycie_energii();
    podatek_dochodowy();
    farba_do_pokoju();
    return 0;
}
