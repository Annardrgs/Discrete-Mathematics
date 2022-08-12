//Grupo: Anna Clara Rodrigues, Daniel Mendes e Isabele de Paula

#include <stdio.h>

int potencia(float t, int n) {
    int i;
    int res;
    for (i = 1, res = 1; i <= n; i++) {
        res *= t;
    }
    return res;
}

int main() {
    float x;
    int n;
    printf("Digite o valor para X e para N respectivamente: \n");
    scanf("%f %d", &x, &n);
    printf("%d", potencia(x, n));
    printf("\n");
}