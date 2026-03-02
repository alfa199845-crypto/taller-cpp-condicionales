#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double num1, num2;
    char operador;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el operador (+, -, *, /, %): ";
    cin >> operador;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (operador) {

        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 == 0) {
                cout << "Error: division por cero" << endl;
            } else {
                cout << "Resultado: " << num1 / num2 << endl;
            }
            break;

        case '%':
            if (num2 == 0) {
                cout << "Error: modulo por cero" << endl;
            } else {
                cout << "Resultado: " << fmod(num1, num2) << endl;
            }
            break;

        default:
            cout << "Operador no valido" << endl;
    }

    return 0;
}
