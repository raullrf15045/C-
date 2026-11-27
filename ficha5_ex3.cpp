#include <iostream>

using namespace std;

int main () {

    double arr [] ={4, -11, 3.3, -0.1, 1.42, 5.3, 12, 0.4, -1.02, 9, -3.4, 0.5, -2.09};
    double produto = 1;
    int tamanho = 13;

    for (int i=0;i<tamanho;i++) {
        produto = produto * arr[i];

    }
    cout << "Multiplicacao de todos os elementos: " << produto << endl;

    return 0;
}
