#include <iostream>
#include <string>
using namespace std;

int main() {

    double nota;
    string letra;
    string estado;

    cout << "pon la nota del estudiante (0-100): ";
    cin >> nota;

    if (nota < 0 || nota > 100) {
        cout << "nota no valida" << endl;
        return 0;
    }

    if (nota >= 90) {
        letra = "A";
    }
    else if (nota >= 80) {
        letra = "B";
    }
    else if (nota >= 70) {
        letra = "C";
    }
    else if (nota >= 60) {
        letra = "D";
    }
    else {
        letra = "F";
    }

    if (nota >= 60) {
        estado = "aprobado";
    } else {
        estado = "reprobado";
    }

    cout << "nota: " << letra << endl;
    cout << "estado: " << estado << endl;

    return 0;
}
