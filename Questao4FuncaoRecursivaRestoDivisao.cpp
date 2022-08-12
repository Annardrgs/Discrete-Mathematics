//Grupo: Anna Clara Rodrigues, Daniel Mendes e Isabele de Paula

#include <iostream>
#include <cmath>

using namespace std;
int MOD(int x, int y) {
    int total;
    x = sqrt(x * x);
    y = sqrt(y * y);
    if (x > y) {
        total = MOD(x - y, y);
        return total;
    } else if (x < y) {
        return x;
    } else if (x == y) {
        return 0;
    }
    return -1;
}

int main() {
    int op1, op2, total;
    cout << "Insira o valor do dividendo: \n";
    cin >> op1;
    cout << "Insira o valor do divisor: \n";
    cin >> op2;
    total = MOD(op1, op2);
    cout << "O resto dessa divisão é:" << total;
}