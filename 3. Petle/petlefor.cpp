#include <iostream>
using namespace std;

int main(){

   for(int i=1; i < 11; i++){
       for(int j=0; j < 11; j++){
	   cout << endl;
           cout << i << " * " << j << " = " << i*j << endl;
       }
       cout << endl;
   }
}