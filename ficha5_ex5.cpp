#include <iostream>

using namespace std;

int main () {
    int numeros[] = {3, 60, 7, 0, 2, 11, 1, 12, 6};
    int tamanho = 9;

    cout << " Array original: \n";
    for(int i=0; i<tamanho;i++){
        cout << numeros[i] << " ";
    }
    cout << endl;

    for (int i=0; i < tamanho/2; i++) {
        int aux = numeros [i];
        numeros [i] = numeros [tamanho - 1 - i];
        numeros [tamanho - 1 - i] = aux;
    }

    cout << "\n\n Array invertido: \n";
    for (int i=0; i < tamanho; i++){
        cout << numeros [i] << " ";
    }

        cout << endl;
        return 0;
}

