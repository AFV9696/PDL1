#include <iostream>

using namespace std;

int main() {

    int num1, num2, num3, num4, num5;
    int largo, corto;

    cout << "Introduzca 5 numeros:\n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    largo = num1;
    corto = num1;

    if (num1 < corto)
    corto = num1;

    if (num2 < corto)
    corto = num2;

    if (num3 < corto)
    corto = num3;

    if (num4 < corto)
    corto = num4;

    if (num5 < corto)
    corto = num5;

    if (num1 > largo)
    largo = num1;

    if (num2 > largo)
    largo = num2;
    
    if (num3 > largo)
    largo = num3;
    
    if (num4 > largo)
    largo = num4;
    
    if (num5 > largo)
    largo = num5;

    cout << "El mas corto es: "<< corto << "\nEl mas largo es: " << largo << endl;

    return 0;
}