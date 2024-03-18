#include <iostream>
using namespace std;

struct DDT
{
    //opis struktury
    string nazwa;
    string waga;
    string wiek;
    string rodzaj_konta;
};

int main()
{
    
    DDT zwierzeta[ 3 ];
    cout << "Wprowadz dane.\n";
    
    for( short licz = 0; licz < 3; licz++ ) {
        cout << "Podaj nazwe: ";
        cin >> zwierzeta[ licz ].nazwa;
        cout << "Podaj wage: ";
        cin >> zwierzeta[ licz ].waga;
        cout << "Podaj wiek: ";
        cin >> zwierzeta[ licz ].wiek;
    }
   
    cout << endl
    << "Wprowadzone zwierzeta:"
    << endl;
    for( short licz = 0; licz < 3; licz++ ) {
        cout << "Uzytkownik " << licz + 1
        << "\tNazwa: " << zwierzeta[ licz ].nazwa
        << "\tWaga: " << zwierzeta[ licz ].waga
        << "\tWiek: " << zwierzeta[ licz ].wiek
        << endl;
    }
   
    cin.get();
    return(0);
}