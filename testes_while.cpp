#include <iostream>

using namespace std;

int main () {

        int i;
        int soma = 0;
        int subtrair = -11;
        double resultado = -1;

    i=16;
        do{
            if(i % 2==0){
                resultado = resultado / i;
            } else
                resultado = resultado * i;
                i++;

        }while (i <=20);

        cout << "Resultado = " << resultado << endl;

    return 0;
}
