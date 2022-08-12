//Grupo: Anna Clara Rodrigues, Daniel Mendes e Isabele de Paula

#include <stdio.h>

int main() {
    int i, n;
    int t1 = 0, t2 = 1;
    int proxTermo = t1 + t2;
    printf("Insira a quantidade de termos: ");
    scanf("%d", &n);
    printf("Sequencia Fibonacci: %d, %d, ", t1, t2);
    for (i = 3; i <= n; ++i) {
        printf("%d, ", proxTermo);
        t1 = t2;
        t2 = proxTermo;
        proxTermo = t1 + t2;
    }
    return 0;
}
