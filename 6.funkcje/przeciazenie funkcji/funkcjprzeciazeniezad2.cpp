#include <iostream>
using namespace std;

float Pole(int a, float b){
    return a+b;
}
float Pole(float a, float b){
    return a+b;
}
int Pole(int a, int b){
    return a+b;
}
float Pole(float a, int b){
    return a+b;
    
}
int main()
{

	float a;
	float b;
	cout<<"podaj 1 liczbe "; cin>>a;
	cout<<"podaj 2 liczbe "; cin>>b;
	cout<<"wynik:"<<Pole(a,b)<<endl;
}



