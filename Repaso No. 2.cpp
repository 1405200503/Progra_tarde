#include <iostream>

using namespace std; 

int main() {
    int edad;

    cout << "Ingrese la edad de la persona: ";
    cin >> edad;

    if (edad >= 18) {
       cout << "La persona es mayor de edad." << endl;
    } else {
       cout << "La persona es menor de edad." << endl;
    }

    return 0;
}

