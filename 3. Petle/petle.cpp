#include <iostream>
using namespace std;

int main(){
int wysokosc, szerokosc;
cout << "podaj szerokosc: ";
cin >> szerokosc;
cout << "podaj wysokosc: ";
cin >> wysokosc;
	/* Inkrementacja
	i = i + 1
	i += 1
	1++
	dekrementacja
	i = i - 1
	i -= 1
	1--
	for(wartoscpoczatkowa; warunek konczacy; krok)
	*/
	for(int i = 0; i < 10; i += 2){
		cout << i << endl;
	}
	//petla zagniezdzona
	for(int i = 0; i < wysokosc; i++){
		for(int j = 0; j < szerokosc; j++){
			cout << "*"; 
			
		}
		cout << endl;
	}
}
