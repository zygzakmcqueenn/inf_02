#include <iostream>
using namespace std;

float Pole(int a, int b){
    return a+b;
}
double Pole(double c, double d){
    return c+d;
}


int main()
{
    double c;
    double d;
    int a;
    int b;
    char opcja;

    cout<<"Wybierz opcje: "<<endl;
    cout<<"1 - dodawanie liczb bez przecinka "<<endl;
    cout<<"2 -  dodawanie liczb z orzecinkiem "<<endl;
   

    cin>>opcja;

    switch(opcja)
    {
    case '1':
        cout<<"podaj 1 liczbe calkowita "; cin>>a;
        cout<<"podaj 2 liczbe calkowita ";
		cin>>b;
        cout<<"wynik: "<<Pole(a,b)<<endl;
        break;
    case '2':
        cout<<"Podaj liczbe z przecinkiem: "; 
		cin>>c;
        cout<<"Podaj  2 liczbe z przecinkiem: "; 
		cin>>d;
        cout<<"wynik "<<Pole(c,d)<<endl;
        break;
    
    default: cout<<"Wybrales nieprawidlowa opcje!"<<endl;
    }

    return 0;
}