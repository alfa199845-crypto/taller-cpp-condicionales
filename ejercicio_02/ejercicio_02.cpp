#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a, b, c;

    cout << "Ingrese  lado 1: ";
    cin >> a;

    cout << "Ingrese  lado 2: ";
    cin >> b;

    cout << "Ingrese  lado 3: ";
    cin >> c;

    // Verificar si es triangulo valido
    if (a + b > c && a + c > b && b + c > a) {

        cout << "Es un triangulo valido.\n";

        // Clasificando los lados
        if (a == b && b == c) {
            cout << "Es equilatero.\n";
        }
        else if (a == b || a == c || b == c) {
            cout << "Es isosceles.\n";
        }
        else {
            cout << "Es escaleno.\n";
        }

        // buscar el lado mayor
        double mayor;

        if (a >= b && a >= c) {
            mayor = a;
        }
        else if (b >= a && b >= c) {
            mayor = b;
        }
        else {
            mayor = c;
        }

        double sumaCuadrados;

        if (mayor == a) {
            sumaCuadrados = pow(b,2) + pow(c,2);
        }
        else if (mayor == b) {
            sumaCuadrados = pow(a,2) + pow(c,2);
        }
        else {
            sumaCuadrados = pow(a,2) + pow(b,2);
        }

        // Clasificando los angulos
        if (pow(mayor,2) == sumaCuadrados) {
            cout << "Es rectangulo.\n";
        }
        else if (pow(mayor,2) < sumaCuadrados) {
            cout << "Es acutangulo.\n";
        }
        else {
            cout << "Es obtusangulo.\n";
        }

    } else {
        cout << "No es un triangulo valido.\n";
    }

    return 0;
}
