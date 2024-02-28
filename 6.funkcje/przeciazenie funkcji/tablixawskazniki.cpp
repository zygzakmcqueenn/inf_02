#include <iostream>

using namespace std;


void SumTab (int tablica[5])
{
	int suma = 0; 
  for(int i = 0; i < sizeof(tablica) / sizeof(int); i += 1){
  	suma += tablica[i];
  	
  }
  cout << suma;
  }


int main()
{
int tablica [5];
cout << sizeof(tablica) / sizeof(int);
cout<< "podaj 5 liczb ktore nalezy zsumować"<<endl;
	for(int i = 0; i < sizeof(tablica) / sizeof(int); i += 1){
cin >> tablica[i];
	}
	 SumTab(tablica);
	 }


	
