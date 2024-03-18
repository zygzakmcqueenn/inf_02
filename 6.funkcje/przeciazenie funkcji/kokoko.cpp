#include <iostream>
using namespace std;
 
int zapytanie(int tablica[10]) {
	cout << "podaj 10liczb" << endl;
	for(int i = 0; i < 10; i++){
		cin >> tablica[i];
}
}
bool zgadywanie(int tablica[10]){
	int odpowiedz;
	cout << "podaj odpowiedz";
	cin >> odpowiedz;
	for(int i = 0; i < sizeof(tablica)/sizeof(tablica[0]); i++){
		if(odpowiedz == tablica[i]){
			return true;
			
			}

	}
	return false;
}
 
int main() {
	int tablica[10];
	bool sprawdzanie;
	int odpowiedz;
	zapytanie(tablica);
 do{
 	cout << "nie zgadles" << endl;
 	
 }
 while(!zgadywanie(tablica));
 
}	