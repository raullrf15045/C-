#include <iostream>

using namespace std;

int main () {

    int numeros[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Introduza o " << (i + 1) << "numero: ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++) {
        soma = soma + numeros[i];
    }

    cout << "A soma dos numeros e: " << soma << endl;

    return 0;
}
