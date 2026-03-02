#include <iostream>
using namespace std;

int main() {
// no nos dejo poner año xd
    int anio;
    cout << "ingrese un anio: ";
    cin >> anio;

    bool esBisiesto = false;

    cout << "\nanalizando el anio " << anio << "...\n";

    if (anio % 4 == 0) {
        cout << "- es divisible entre 4\n";

        if (anio % 100 == 0) {
            cout << "- es divisible entre 100\n";

            if (anio % 400 == 0) {
                cout << "- es divisible entre 400\n";
                esBisiesto = true;
            } else {
                cout << "- no es divisible entre 400\n";
                esBisiesto = false;
            }

        } else {
            cout << "- no es divisible entre 100\n";
            esBisiesto = true;
        }

    } else {
        cout << "- no es divisible entre 4\n";
        esBisiesto = false;
    }

    if (esBisiesto) {
        cout << "\nresultado: Es un anio bisiesto\n";
    } else {
        cout << "\nresultado: No es un anio bisiesto\n";
    }

    return 0;
}
