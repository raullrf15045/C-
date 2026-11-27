#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector<int> myvector;
    int sum (0);
    int num;

    cout << "Introduza numeros (digite 0 para terminar):\n";

    while (true) {
        cout << "Numero: ";
        cin >> num;

        if (num == 0) {
            break;
        }

        myvector.push_back(num);
    }

    while (!myvector.empty()) {
        sum += myvector.back();
        myvector.pop_back();
    }

    cout << "A soma = " << sum << "\n";

    return 0;
}