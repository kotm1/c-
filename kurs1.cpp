#include<iostream>
#include<string>
#include<cmath>
using namespace std;

const double M_PI = 3.141592653589793;

void suma_dwoch_liczb() {
    int pierwsza_liczba, druga_liczba;
    cout << "Podaj pierwsza liczbe: ";
    cin >> pierwsza_liczba;
    cout << "Podaj druga lczbe: ";
    cin >> druga_liczba;
    cout << "Suma: " << pierwsza_liczba + druga_liczba << endl;
}

void srednia_dwoch_liczb() {
    int pierwsza_liczba, druga_liczba;
    cout << "Podaj pierwsza liczbe: ";
    cin >> pierwsza_liczba;
    cout << "Podaj druga liczbe: ";
    cin >> druga_liczba;
    float srednia = (pierwsza_liczba + druga_liczba) / 2.0;
    cout << "Srednia: " << srednia << endl;
}

void pole_obwod_kola() {
    float promien;
    cout << "Podaj promien kola: ";
    cin >> promien;
    float pole = M_PI * pow(promien, 2);
    float obwod = 2 * M_PI * promien;
    cout << "Pole kola: " << pole << endl;
    cout << "Obwod kola: " << obwod << endl;
}

void celsius_na_fahrenheit() {
    float celsius;
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;
    float fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Temperatura w stopniach Fahrenheita: " << fahrenheit << endl;
}

void koszt_katowice_warszawa() {
    float cena_benzyny;
    cout << "Podaj obecna cene benzyny za litr: ";
    cin >> cena_benzyny;
    float dystans = 335;
    float spalanie = 9;
    float koszt = (dystans / 100) * spalanie * cena_benzyny;
    cout << "Koszt przejazdu z Katowic do Warszawy: " << koszt << " zl" << endl;
}

void koszt_dowolnej_trasy() {
    float cena_benzyny, dystans, spalanie;
    cout << "Podaj obecna cene benzyny za litr: ";
    cin >> cena_benzyny;
    cout << "Podaj dlugosc trasy w km: ";
    cin >> dystans;
    cout << "Podaj wartosc spalania samochodu w litrach na 100km: ";
    cin >> spalanie;
    float koszt = (dystans / 100) * spalanie * cena_benzyny;
    cout << "Koszt przejazdu: " << koszt << " zl" << endl;
}

int main() {
    suma_dwoch_liczb();
    srednia_dwoch_liczb();
    pole_obwod_kola();
    celsius_na_fahrenheit();
    koszt_katowice_warszawa();
    koszt_dowolnej_trasy();
    return 0;
}