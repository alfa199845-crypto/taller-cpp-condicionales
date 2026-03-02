#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double celsius;
    double fahrenheit, kelvin, rankine;

    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;

    fahrenheit = (9.0/5.0) * celsius + 32;
    kelvin = celsius + 273.15;
    rankine = (9.0/5.0) * celsius + 491.67;

    cout << fixed << setprecision(2);

    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;
    cout << "Rankine: " << rankine << endl;

    return 0;
}
