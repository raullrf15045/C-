#include <iostream>

using namespace std;

int main() {

    int x, y;
    double z;
    double a, b, c;

    cout << "Introduza o primeiro numero inteiro (x): ";
    cin >> x;

    cout << "Introduza o segundo numero inteiro (y): ";
    cin >> y;

    cout << "Introduza o numero real (z): ";
    cin >> z;

    a = (y * 2) * (x / 2.0);
    b = (3 * z) + x;
    c = z * z * z;

    cout << "Resultado a): " << a << endl;
    cout << "Resultado b): " << b << endl;
    cout << "Resultado c): " << c << endl;

    return 0;

}

