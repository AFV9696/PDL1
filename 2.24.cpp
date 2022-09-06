#include <iostream>
using namespace std;

int main() {
  int n1, n2;

  cout << "Introduzca 2 numeros:\n";
  cin >> n1;
  cin >> n2;

  cout << "el primer numero es: " << n1 << endl;
  cout << "El segundo numero es: " << n2 << endl;

  int suma = n1 + n2;

  cout << "La suma es: " << suma << endl;

  if ( suma % 2 == 0)
    cout << suma << " es par.";
  else
    cout << suma << " es impar.";

  return 0;
}