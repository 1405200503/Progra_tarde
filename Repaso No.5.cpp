#include <iostream>

using namespace std; 

int main() {
    int numero;

    do {
        cout << "Ingrese un n�mero positivo: ";
        cin >> numero;
    } while (numero <= 0);

    cout << "El n�mero ingresado es: " << numero << endl;

    return 0;
}

