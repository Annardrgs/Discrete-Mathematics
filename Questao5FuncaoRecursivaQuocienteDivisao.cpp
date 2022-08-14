//Grupo: Anna Clara Rodrigues, Daniel Mendes, Isabele de Paula e Noemi Cho

#include <iostream>
#include <cmath>

using namespace std;
int DIV(int x, int y) {
    int total;
    x = sqrt(x * x);
    y = sqrt(y * y);
    if (y == 0) {
        return 0;
    } else if (x == 0) {
        return 0;
    } else if (x > y) {
        total = DIV(x - y, y) + 1;
        return total;
    } else if (x < y) {
        return 0;
    } else if (x == y) {
        return 1;
    }
    return -1;
}

int main() {
    int op1, op2, total;
    cout << "Insira o valor do dividendo: \n";
    cin >> op1;
    cout << "Insira o valor do divisor: \n";
    cin >> op2;
    total = DIV(op1, op2);
    cout << "O valor final da divisão é:" << total;
}