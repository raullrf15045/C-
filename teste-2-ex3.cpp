#include <iostream>
using namespace std;

int mostraNumsESoma(int num1, int num2) {
    int soma = 0;

    for (int i = num1; i <= num2; i++) {
        cout << i << " ";
        soma += i;
    }
    return soma;
}

int main() {
    int num1, num2;
    cout << "Introduza primeiro numero inteiro: ";
    cin >> num1;
    cout << "Introduza segundo numero inteiro: ";
    cin >> num2;

    int resultado = mostraNumsESoma(num1, num2);
    cout << "Soma de todos os numeros = " << resultado << endl;

    return 0;
}
