
 
#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
int main(int argc, char *argv[])
{
//tablica dostepnych nominalow
int N[8]={25, 20, 15, 10, 5, 2, 1};
int R,P, i;
 
cout << "Podaj reszte do wyplacenia: ";
cin >> R;
 R - 20;
i=0;
while (R>0)       //dopoki nie wydano calej reszty
{
if (R >= N[i])  //sprawdz czy mozna wydac danym nominalem
{
P=R / N[i];   //ile razy wydac dany nominal
R=R-(N[i]*P); //zmniejsz reszte o wydany nominal
cout << N[i] << " x " << P << endl; //wypisz wynik
}
i++;            //rozpatrz kolejny nominal
}
 
system("PAUSE");
return 0;
}