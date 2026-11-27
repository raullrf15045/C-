#include <iostream>

using namespace std;

int main () {
    int numeros[] = {0, 12, 5, 6, 2, 11, 7, 4, 0, 3};
    int tamanho = 10;

    cout << " Array original: \n";
    for(int i=0; i<tamanho;i++){
        cout << numeros[i] << " ";
    }
    cout << endl;

    for (int i=0; i < tamanho; i++) {
        for (int j=0; j < tamanho; j++) {
            if(numeros [j] < numeros [j+1]) {
                int aux = numeros [j];
                numeros [j] = numeros [j+1];
                numeros [j+1] = aux;
            }
        }
    }


    cout << "\n\nArray ordenado (decrescente): \n";
    for (int i=0;i<tamanho;i++) {
        cout << numeros [i] << " ";

    }

    cout << endl;
    return 0;
}
