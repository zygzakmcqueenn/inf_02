#include <iostream>
using namespace std;
int main(){


	int tab[3][5];
	 for (int i=0;i<3;i++){
	    for (int j=0;j<5;j++){
	
	    	tab[i][j] = (j*i);
			
	       
	   	}
	}
		for (int i=0;i<3;i++){
		    for (int j=0;j<5;j++){
		cout << tab[i][j] <<  ", ";
			}
			cout << endl;
		}
}
	