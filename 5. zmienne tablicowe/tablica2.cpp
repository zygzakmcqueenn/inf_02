#include <iostream>
using namespace std;
int main()
{

int tab[10];
cout << "podaj 5liczb: "; 
for (int i=0;i<10;i++){
        cin >> tab[i] ; 
		

    }
    cout << "parzyste liczby z nich:";
	for(int i=0;i<10;i++){
		if (tab[i]%2 == 0){
		cout << tab[i];
	}
		
	

}
}
