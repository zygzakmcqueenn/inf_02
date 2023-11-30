#include <iostream>
using namespace std;

int main()
{
    int liczby[ 3 ];
    cout << "Podaj liczbe 1: ";
    cin >> liczby[ 0 ];
    cout << "Podaj liczbe 2: ";
    cin >> liczby[ 1 ];
    cout << "podaj liczbe 3: ";
    cin >> liczby[ 2 ];
    int suma = liczby[ 0 ] + liczby[ 1 ] + liczby[ 2 ];
    cout << "Suma trzech liczb wynosi:" << suma << endl;
   
    return 0;
}