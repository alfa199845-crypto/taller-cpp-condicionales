#include <iostream>
using namespace std;

int main() {

    const int LEER = 1;      // 001
    const int ESCRIBIR = 2;  // 010
    const int EJECUTAR = 4;  // 100

    int numero;

    cout << "Ingrese_un_numero_del_0_al_7: ";
    cin >> numero;

    if (numero & LEER) {
        cout << "Puede_leer\n";
    }

    if (numero & ESCRIBIR) {
        cout << "Puede_escribir\n";
    }

    if (numero & EJECUTAR) {
        cout << "Puede_ejecutar\n";
    }

    if (numero == 0) {
        cout << "No_tiene_permisos\n";
    }

    return 0;
}
