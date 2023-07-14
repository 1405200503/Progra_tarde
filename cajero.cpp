#include <iostream>

using namespace std;

int main() {
    // Saldo inicial
    int saldo = 1000;
    int opcion;
    int monto;
    string pin; 
    
    while(pin != "industrial")
    { 
  	cout<<"Inserte su contrase�a: "<<endl;
  	cin>>pin; 
  	system("cls");
    }
  	

    // Men� del cajero autom�tico
    while (true) {
        cout << "Bienvenido al cajero autom�tico" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Depositar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opci�n: ";
        cin >> opcion;
    system("cls");

        switch (opcion) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                system("pause");
				system("cls");
				break;
                
            case 2:
                cout << "Ingrese el monto a retirar: $";
                cin >> monto;
                if (monto > saldo) {
                    cout << "Saldo insuficiente. No se puede realizar la operaci�n." << endl;
                } else {
                    saldo -= monto;
                    cout << "Retiro exitoso. Su saldo actual es: $" << saldo << endl;
                }
                system("pause");
                system("cls");
                break;
                
            case 3:
                cout << "Ingrese el monto a depositar: $";
                cin >> monto;
                saldo += monto;
                cout << "Dep�sito exitoso. Su saldo actual es: $" << saldo << endl;
                system("pause");
				system("cls");
				break;
                
            case 4:
                cout << "Gracias por utilizar el cajero autom�tico. �Hasta luego!" << endl;
                system("pause");
				system("cls");
                return 0;
            default:
                cout << "Opci�n inv�lida. Por favor, ingrese una opci�n v�lida." << endl;
        }

        cout << endl;
    }

	system("cls");
    return 0;
}
