#include <iostream>

using namespace std;

int main() {
    int radio; 

    cout << "Introduzca el radio del circulo: ";
    cin >> radio;
    
    cout << "El diametro es " << radio * 2.0
    << "\nLa circunferencia es " << 2 * 3.14159 * radio
    << "\nEl area es " << 3.14159 * radio * radio << endl;

 return 0;
}

