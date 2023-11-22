#include <iostream>
using namespace std;
 
 
int main(){
	int wysokosc, szerokosc;
	cout << "podaj szerokosc: ";
	cin >> szerokosc;
	cout << "podaj wysokosc: ";
	cin >> wysokosc;
	int size = 8;
	for(int i = 0; i < wysokosc; i++){
		for(int j = 0; j < szerokosc; j++){
			if(i == 0 || i == wysokosc - 1)cout << "-";
			else if(j == 0 || j == szerokosc - 1)cout << "|";
			else if((i+j)%2 == 0)
			cout <<"#";
			else
			cout <<"*";

 
 
		}
		cout << endl;
	}
}