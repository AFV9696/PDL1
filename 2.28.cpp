#include <iostream>

using namespace std;

int main()
{
 int num1;
 cout<<"Introduce un numero de 4 digitos:";
 cin>>num1;
 
 cout<<num1/1000<<"   ";
 num1=num1%1000;
 
 cout<<num1/100<<"   ";
 num1=num1%100;
 
 cout<<num1/10<<"   ";
 num1=num1%10;
 
 cout<<num1<<endl;
 
 return 0;
}