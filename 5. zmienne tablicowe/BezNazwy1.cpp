#include <iostream>
using namespace std;
int main()
{

int tab[10];
cout << "podaj 5liczb: "; 
for (int i=0;i<5;i++){
        cin >> tab[i] ; 
		

    }
    cout << "na odwrot: ";
	for(int i=0;i<0;i++){
		if(tab[i] <= 0){
			
			cout << "0 "; 
			
			}
			else cout << tab[i] << " ";
	}
}