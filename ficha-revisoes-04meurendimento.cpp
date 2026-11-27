#include <iostream>

using namespace std;

int main() {

    double valorHora, horasMes, salarioMes, salarioAno;

    cout << "Quanto ganha por hora (euros)? ";
    cin >> valorHora;

    cout << "Quantas horas trabalha por mes? ";
    cin >> horasMes;

    salarioMes = valorHora * horasMes;
    salarioAno = salarioMes * 12;

    cout << "Salario mensal" << salarioMes << "euos" << endl
    cout << "Salario anual" << salarioAno << "euos" << endl

    return 0;

}

