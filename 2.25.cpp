#include <iostream>

using namespace std;

int main()
  {
 int num1, num2, num3;

 cout << "Ingresa 3 numeros\n";
 cin >> num1 >> num2 >> num3;

 if ( num3 % num1 == 0 ){
 cout << num1 << " es un factor de " << num3 << endl;
 } else cout << num1 << " no es un factor de " << num3 << endl;
 if ( num3 % num2 == 0 ){
 cout << num2 << " es un factor de " << num3 << endl;
 } else cout << num2 << " no es un factor de " << num3 << endl;
 return 0;
 }