#include <iostream>

using namespace std;

int main () {
    int numeros[] = {10, 8, -5, 6, 12, 4, -7, 14, 3, -3};
    int tamanho = 10;

    cout << " Array original: \n";
    for(int i=0; i<tamanho;i++){
        cout << numeros[i] << " ";
    }
    cout << endl;

    for (int i=0; i < tamanho; i++) {
        for (int j=0; j < tamanho; j++) {
            if(numeros [j] < numeros [j-1]) {
                int aux = numeros [j];
                numeros [j] = numeros [j-1];
                numeros [j-1] = aux;
            }
        }
    }


    cout << "\n\nArray ordenado (crescente): \n";
    for (int i=0;i<tamanho;i++) {
        cout << numeros [i] << " ";

    }

    cout << endl;
    return 0;
}

