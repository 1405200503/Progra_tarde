#include <iostream>

using namespace std; 

int main() {
    int numero;

    do {
        cout << "Ingrese un número positivo: ";
        cin >> numero;
    } while (numero <= 0);

    cout << "El número ingresado es: " << numero << endl;

    return 0;
}

