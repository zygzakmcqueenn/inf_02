#include<iostream> 
using namespace std; 
int main() { 
int n; 
cout<<"Podaj liczbę: "; 
cin>>n;
 cout<<"Czynniki pierwsze liczby "<<n<<": "; 
 int k=2; 
 while(n>1) {
  while(n%k==0) { 
  cout<<k<<" ";
   n/=k; 
   }
    ++k;
     } 
     return 0; }