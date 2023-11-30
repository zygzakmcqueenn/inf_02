#include <iostream>
using namespace std;

int main(){
	
	int liczba;
	cout << "Liczba: ";
	cin >> liczba;
	
	short t25 = 0;
	short t10 = 0;
	
	while(liczba > 0){
	
		if(liczba >= 25){
			t25 += 1;
			liczba -= 25;
		}
		else if(liczba >= 10){
			t10 += 1;
			liczba -= 10;
		}
		
			
	}
	cout << "Tal 25: " << t25 << endl;
	cout << "Tal 10: " << t10 << endl;
	
	
	system("pause");
	return 0;
	
}