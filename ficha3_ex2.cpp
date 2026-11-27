#include <iostream>
#include <string>

using namespace std;

string funcaoAscii(int n) {
    if (n > 255) {
        return "";
    }

    string linha;
    linha = to_string(n);
    linha = linha + " ";
    linha = linha + char(n);
    linha = linha + "\n";

    return linha + funcaoAscii(n + 1);
}

int main() {
    cout << funcaoAscii(0);
    return 0;
}
