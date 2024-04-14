#include <iostream>
using namespace std;


int main()
{
	
	int liczby[26] = {2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
	int szukana;
    cout << "podaj szukana liczbe: ";
	cin >> szukana;
	cout << "szukane sa na pozycjach: ";
	for(int i; i <= 26; i++){
		if(liczby[i] == szukana){
	   cout << i << ", ";	
		}
		
	}
}