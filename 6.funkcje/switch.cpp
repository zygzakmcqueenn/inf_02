#include <iostream>
using namespace std;

int main(){
	float liczba1;
	float liczba2;
	char znak;
	 cout << "Podaj liczbe: ";
    cin >> liczba1;
     cout << "Podaj druga liczbe: ";
    cin >> liczba2;
     cout << "Podaj znak (+, -, :, *): ";
    cin >> znak;
    switch( znak ){
    	case '+':
    		cout << liczba1 + liczba2;
    		break;
    	case ':':
		cout << liczba1 / liczba2;
		break;
		
		case '-':
		cout << liczba1 - liczba2;
		break;
		
		case '*':			
    		cout << liczba1 * liczba2;
			break;	
   	}
}