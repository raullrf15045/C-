#include <iostream>
using namespace std;

int main(){

    int n1, n2, aux;
    int soma = 0;

    cout << "Introduza o primeiro numero: ";
    cin >> n1;
    cout << "Introduza o segundo numero: ";
    cin >> n2;

    if (n2 < n1) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for (int i = n1; i <= n2; i++) {
        soma = soma + i;
    }

    cout << "O somatorio dos numeros e: " << soma << endl;


    return 0;

}
