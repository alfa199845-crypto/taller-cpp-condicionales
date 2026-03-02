9#include <iostream>
using namespace std;

int main() {

    double peso, altura, imc;

    cout << "ingrese  peso en kg: ";
    cin >> peso;

    cout << "ingrese  altura en metros: ";
    cin >> altura;

    if (altura <= 0) {
        cout << "altura invalida\n";
        return 0;
    }

    imc = peso / (altura * altura);

    cout << "\nsu imc es: " << imc << "\n";

    if (imc < 18.5) {
        cout << "clasificacion: bajo peso\n";
        cout << "entonces: aumente ingesta calorica y consulte a su nutricionista\n";
    }
    else if (imc < 25) {
        cout << "clasificacion: normal\n";
        cout << "entonces: continuar con habitos de vida saludable\n";
    }
    else if (imc < 30) {
        cout << "clasificacion: sobrepeso\n";
        cout << "entonces: solicitar consulta con medico general\n";
    }
    else if (imc < 35) {
        cout << "clasificacion: obesidad i\n";
        cout << "entonces: solicitar consulta con medico general y adherencia a plan nutricional\n";
    }
    else {
        cout << "clasificacion: obesidad ii\n";
        cout << "entonces: consulta con supra especialista endocrinologo\n";
    }

    return 0;
}
