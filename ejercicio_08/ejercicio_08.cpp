#include <iostream>
using namespace std;

int main() {

    double saldo = 1000;  
    int opcion;
    double monto;
    int transacciones = 0;

    cout << "cajero automatico \n";

    do {
        cout << "\n1. depositar\n";
        cout << "2. retirar\n";
        cout << "3. consultar saldo\n";
        cout << "4. salir\n";
        cout << "seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1:
                cout << "ingrese el monto a depositar: ";
                cin >> monto;
                saldo += monto;
                transacciones++;
                cout << "deposito exitoso.\n";
                break;

            case 2:
                cout << "ingrese el monto a retirar: ";
                cin >> monto;

                if (monto > saldo) {
                    cout << "error: saldo insuficiente.\n";
                } else {
                    saldo -= monto;
                    transacciones++;
                    cout << "retiro exitoso.\n";
                }
                break;

            case 3:
                cout << "saldo actual: " << saldo << endl;
                break;

            case 4:
                cout << "transaccion finalizada.\n";
                break;

            default:
                cout << "opcion invalida.\n";
        }

    } while (opcion != 4);

    cout << "\ntotal de transacciones realizadas: " << transacciones << endl;

    return 0;
}
