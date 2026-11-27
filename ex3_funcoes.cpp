#include <iostream>
using namespace std;

float divide2Num(int a, int b) {
    if (b == 0) {
        cout << "Erro: divisão por zero!" << endl;
        return 0;
    }
    return (float)a / b;
}

int main() {
    cout << "10 / 2 = " << divide2Num(10, 2) << endl;
    cout << "15 / 4 = " << divide2Num(15, 4) << endl;
    cout << "20 / 3 = " << divide2Num(20, 3) << endl;
    return 0;
}

