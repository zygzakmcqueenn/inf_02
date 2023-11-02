#include <iostream>
using namespace std;
int main(){
	

cout << "hello world";
cout << endl;
system("pause");
short a, b;
cout << "podaj a: ";
cin >> a;
cout << "podaj b: ";
cin >> b;
if(a > b){
	cout << a << " > " << b;
}
else if(a == b){
	cout << a << " = " << b;
}
else{
	cout << a << " < " << b;
}

}
