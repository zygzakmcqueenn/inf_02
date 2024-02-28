#include <iostream>
using namespace std;
int Netto(float brutto) {
 	int wynik2;
	wynik2 = brutto / 1.23;
	return wynik2;	
  
}
int Brutto(float netto) {
	int wynik;
	wynik = netto * 1.23;
	return wynik;
    
}
int main()
{
    int wybor;
    float netto, brutto;
    cout << "Ktora kwote chcesz obliczyc? \n 1. Brutto \n 2. Netto" << endl;
    cin >> wybor;

    switch(wybor)
    {
        case 1:
            cout << "Podaj kwote netto: ";
            cin >> netto;
            cout << "Brutto: " << Brutto(netto) << " zl" << endl;
            break;
        case 2:
            cout << "Podaj kwote brutto: ";
            cin >> brutto;
            cout << "Netto: " << Netto(brutto) << " zl" << endl;
            break;
    }
}