#include <iostream>

using namespace std;

int main()
{
 char a;
 cout<<"Introduzca un caracter: " <<endl;
 cin>>a;
 
 cout<<static_cast< int >(a);
 
 return 0;
}