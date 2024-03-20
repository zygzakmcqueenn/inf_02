#include <iostream>
using namespace std;

struct ksiazki_DDT
{
	string tytul;
	string autor;
	float rok;
	string wydawnictwo;
	float cena;
}


ksiazki_DDT[ 7 ] =
{
    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
};
int main(){
	int wybor;
	int rok;
	float cena;
	string wydaw;
	int wbrok;
	float wbcena;
	string wbwydaw;
	cout << ksiazki_DDT[0].tytul;
	cout << "Witaj w ksiegarnii" << endl;
	cout << "Po jakiej kategorii chcial bys wyszukac ksiazke: " << endl << "1. Rok wydania" << endl << "2. Cena" << endl << "3. Wydawnictwo" << endl << "0. Wyjscie" << endl;
	cin >> wybor;
	switch( wybor )
{
case 1:
        
    cout << "od jakiego roku wydania chcesz zobaczyc ksiazki: ";
    cin >> wbrok;
    for(int i = 0; i < 7; i++){
    	if (ksiazki_DDT[i].rok >= wbrok){
		cout << ksiazki_DDT[i].tytul << "	" << ksiazki_DDT[i].autor << "	" << ksiazki_DDT[i].rok << "	" << ksiazki_DDT[i].wydawnictwo << "   	" << ksiazki_DDT[i].cena << endl;
		}
		}
break;
   
case 2:
      
          cout << "od jakiej ceny chcesz zobaczyc ksiazki: ";
    cin >> wbcena;
    for(int i = 0; i < 7; i++){
    	if (ksiazki_DDT[i].cena >= wbcena){
		cout << ksiazki_DDT[i].tytul << "	" << ksiazki_DDT[i].autor << "	" << ksiazki_DDT[i].rok << "	" << ksiazki_DDT[i].wydawnictwo << "   	" << ksiazki_DDT[i].cena << endl;
		}
		}
break;
    
   
    
case 3:
      
          cout << "od jakich wydawnictw chcesz zobaczyć książki: ";
    cin >> wbwydaw;
    for(int i = 0; i < 7; i++){
    	if (ksiazki_DDT[i].wydawnictwo == wbwydaw){
		cout << ksiazki_DDT[i].tytul << "	" << ksiazki_DDT[i].autor << "	" << ksiazki_DDT[i].rok << "	" << ksiazki_DDT[i].wydawnictwo << "   	" << ksiazki_DDT[i].cena << endl;
		}
		}
    break;
   
case 0:
    cout << "0k";
    break;
}
}
