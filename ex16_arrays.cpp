#include <iostream>

using namespace std;

int factorial (int numero) {
    if (numero == 1 || numero ==0) {
        return 1;
    } else {
        return numero * factorial (numero - 1);
    }
}

int fibonacci (int numero) {
    if (numero == 1 || numero == 2) {
        return 1;
    } else {
        return numero = fibonacci(numero - 1) + fibonacci(numero - 2);
    }

}

int main () {

    int n = 5;
    int f = 5;

    cout << "factorial de " << n << " = " << factorial(n) << endl;
    cout << "fibonacci de " << n << " = " << fibonacci(f) << endl;

    return 0;
}
