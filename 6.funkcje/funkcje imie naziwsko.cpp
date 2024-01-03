#include <iostream>
using namespace std;

void przywitanie(string imie, string nazwisko) {
    cout << "Witaj kolego " << imie << " " << nazwisko;
}

int main() {
	 string imie, nazwisko;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
    przywitanie(imie, nazwisko);

}