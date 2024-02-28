#include <iostream>

using namespace std;


void zwieksz_liczbe (float *wsk4, float *wsk5, float *wsk6)
{
  *wsk4 +=1;
  *wsk5 += 2;
  *wsk6 += 3;
}

int main()
{
float n1 = 1;
float *wsk1 = &n1;
float n2 = 2;
float *wsk2 = &n2;
float n3 = 3;
float *wsk3 = &n3;

cout << "wartosci zmiennych: " << endl;
cout << "zmienna 1: " << n1 << endl;
cout << "zmienna 2: " << n2 << endl;
cout << "zmienna 3: " << n3 << endl;

zwieksz_liczbe( &n1, &n2, &n3);

cout << "wartosci po modyfikacji: " << endl;
cout << "zmienna 1: " << *wsk1 << endl;
cout << "zmienna 2: " << *wsk2 << endl;
cout << "zmienna 3: " << *wsk3 << endl;
	
}