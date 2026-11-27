#include <iostream>
using namespace std;

int multiplica2nums(int a, int b) {

    cout << "A soma de " << a << " + " << b << " = " << a + b << endl;
}

int main() {
    int a, b;

    cout << "Diga o primerio numero(a): ";
    cin >> a;
    cout << "Diga o segundo numero(b): ";
    cin >> b;

    cout << multiplica2nums(a, b) << endl;

    return 0;
}

