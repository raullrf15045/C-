#include <iostream>

using namespace std;

/*Desenvolva o algoritmo de um programa que faz a leitura de dez
números inteiros e apresenta como resultado a soma dos quadrados dos dez valores lidos.
*/
int main () {

    int N=10;
    int numero[N], soma=0;


    for (int i=0; i<10; i++) {
        cout << "Diz me os dez numeros para a soma dos quadrados: ";
        cin >> numero[N];
        cout << numero[N] << endl;

        soma = soma + numero[N] * numero[N];

    }

    cout << "A soma dos dez valores lidos: " << soma << endl;


    return 0;
}
/*
    #define N 10

    int arrayNums[N]
    int soma=0

    for (int i=0; i<10; i++) {
        cout << "Diz me os dez numeros para a soma dos quadrados: ";
        cin >> numero[N];

    cout << "\n\nA conta : 0";
    for (int i=0; i<N; i++) {
        soma += arrayNums[i] * arrayNums[i];
        cout << " + (" << arrayNuns[i];
        cout << " x " << arrayNums[i] << ")";
    }
    cout << "\n\nO resultado final = " << soma;
