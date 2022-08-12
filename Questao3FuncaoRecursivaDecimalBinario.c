//Grupo: Anna Clara Rodrigues, Daniel Mendes e Isabele de Paula

#include <stdio.h>

int Dec2Bin(int n){
    if (n==0)
        return 0;
    else
        return ((n%2)+10*Dec2Bin(n/2));
}

void main(){
    int no;
    printf("Insira um número decimal: \n");
    scanf("%d",&no);
    printf("Decimal: %d = Binary: %d\n",no,Dec2Bin(no));
}