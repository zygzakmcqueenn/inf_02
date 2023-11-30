#include <iostream>

using namespace std;

int main()
{
    int odliczanie;

    odliczanie = 10;
    while( odliczanie >= 0 )
    {
        cout << odliczanie << ", ";
        --odliczanie; 
    sleep(1);
    } //while
    cout << "koniec" << endl;

 short a = 2;
 while(a <= 30){
 	cout << a << ", ";
 	a += 2;
 	
 }
 cout << endl << endl << endl;
 short liczba;
 do{
 	cout << "podaj";
 	cin >> liczba;
 }while(liczba != 9);
 
}
