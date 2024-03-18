#include <iostream>
using namespace std;


int tablica1 (int tablica[10]){
	
cout<< "podaj 10 liczb ktore nalezy zsumować"<<endl;
	for(int i = 0; i < 10; i += 1){
cin >> tablica[i];
}
return tablica[10];	
		
}
int sprawdzanie(int odpowiedz, int sprawdzanie1, int tablica[10]){
	cout << "zgadnij liczbe ";
	cin >> odpowiedz;
		for(int i = 0; i < 10; i += 1){
		if(odpowiedz == tablica[i]){
		
		sprawdzanie1 = 1;
		return sprawdzanie1;
		}
		else{
			sprawdzanie1 = 0;
			return sprawdzanie1;
		}
}
}
int main(){
int tablica[10];
int odpowiedz; 
int sprawdzanie1 = 0;
tablica1(tablica);
sprawdzanie(odpowiedz, sprawdzanie1, tablica);
cout << sprawdzanie1;
switch ( sprawdzanie1 ){
	case 0:
		cout<< "spróbuj jeszcvze raz";
	sprawdzanie(odpowiedz, sprawdzanie1, tablica);
	
	case 1:
		cout << "zgadles";
}

	
	}
	









