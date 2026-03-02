#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "ingrese el valor de a: ";
    cin >> a;

    cout << "ingrese el valor de b: ";
    cin >> b;

    cout << "\nvalores originales -> a: " << a << " , b: " << b << "\n";
    {
        int x = a;
        int y = b;

        cout << "\nmetodo 1 (variable temporal):\n";

        int temp = x;
        x = y;
        y = temp;

        cout << "a: " << x << " , b: " << y << "\n";
    }

    {
        int x = a;
        int y = b;

        cout << "\nmetodo 2 (operaciones aritmeticas):\n";

        x = x + y;
        y = x - y;
        x = x - y;

        cout << "a: " << x << " , b: " << y << "\n";
    }

    {
        int x = a;
        int y = b;

        cout << "\nmetodo 3 (XOR):\n";

        x = x ^ y;
        y = x ^ y;
        x = x ^ y;

        cout << "a: " << x << " , b: " << y << "\n";
    }

    return 0;
}
