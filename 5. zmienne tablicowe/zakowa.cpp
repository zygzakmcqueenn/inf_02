#include<iostream>
using namespace std;

int main(){
	
	char tablica[201];
	cout << "podaj zdanie 200slow maks: ";
	cin.getline(tablica,201);
		
	for (char i=0; i <= sizeof(tablica); i++){
		if (tablica[i] == '.') {
			tablica[i] = '-';
		}
			
		else if (tablica[i] == ' ') {
			tablica[i] = '-';
		}
		
		
		}
		
			cout << tablica;
	
	
	
	
	
	
	
	
}