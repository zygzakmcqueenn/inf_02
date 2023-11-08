#include <iostream>
#include <cmath>
using namespace std;

int main() {
  
  cout << "Podaj liczbe do dwoch miejsc po przecinku: ";
  double liczba;
  cin >> liczba;

 
  liczba = liczba - 20;

  
  int ilosc_25 = floor(liczba / 25); // ilość liczb 25
  liczba = liczba - ilosc_25 * 25; // reszta po podzieleniu przez 25
  int ilosc_20 = floor(liczba / 20); // ilość liczb 20
  liczba = liczba - ilosc_20 * 20; // reszta po podzieleniu przez 20
  int ilosc_15 = floor(liczba / 15); // ilość liczb 15
  liczba = liczba - ilosc_15 * 15; // reszta po podzieleniu przez 15
  int ilosc_10 = floor(liczba / 10); // ilość liczb 10
  liczba = liczba - ilosc_10 * 10; // reszta po podzieleniu przez 10
  int ilosc_5 = floor(liczba / 5); // ilość liczb 5
  liczba = liczba - ilosc_5 * 5; // reszta po podzieleniu przez 5
  int ilosc_2_5 = floor(liczba / 2.5); // ilość liczb 2.5
  liczba = liczba - ilosc_2_5 * 2.5; // reszta po podzieleniu przez 2.5
  int ilosc_1_125 = floor(liczba / 1.125); // ilość liczb 1.125
  liczba = liczba - ilosc_1_125 * 1.125; // reszta po podzieleniu przez 1.125

  
  ilosc_25 = 2 * round(ilosc_25 / 2.0);
  ilosc_20 = 2 * round(ilosc_20 / 2.0);
  ilosc_15 = 2 * round(ilosc_15 / 2.0);
  ilosc_10 = 2 * round(ilosc_10 / 2.0);
  ilosc_5 = 2 * round(ilosc_5 / 2.0);
  ilosc_2_5 = 2 * round(ilosc_2_5 / 2.0);
  ilosc_1_125 = 2 * round(ilosc_1_125 / 2.0);

  
  double polowa_25 = ilosc_25 / 2.0; // połowa liczby 25
  double polowa_20 = ilosc_20 / 2.0; // połowa liczby 20
  double polowa_15 = ilosc_15 / 2.0; // połowa liczby 15
  double polowa_10 = ilosc_10 / 2.0; // połowa liczby 10
  double polowa_5 = ilosc_5 / 2.0; // połowa liczby 5
  double polowa_2_5 = ilosc_2_5 / 2.0; // połowa liczby 2.5
  double polowa_1_125 = ilosc_1_125 / 2.0; // połowa liczby 1.125


  cout << "Liczba 25: " << ilosc_25 << ", polowa: " << polowa_25 << endl;
  cout << "Liczba 20: " << ilosc_20 << ", polowa: " << polowa_20 << endl;
  cout << "Liczba 15: " << ilosc_15 << ", polowa: " << polowa_15 << endl;
  cout << "Liczba 10: " << ilosc_10 << ", polowa: " << polowa_10 << endl;
  cout << "Liczba 5: " << ilosc_5 << ", polowa: " << polowa_5 << endl;
  cout << "Liczba 2.5: " << ilosc_2_5 << ", polowa: " << polowa_2_5 << endl;
  cout << "Liczba 1.125: " << ilosc_1_125 << ", polowa: " << polowa_1_125 << endl;
  cout << "Reszta: " << liczba << endl;

  return 0;
}