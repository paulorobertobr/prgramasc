#include <stdio.h>
#include <stdlib.h>

int main (){

    int num1, num2, soma, div, multi, sub;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1+num2;
    div = num1/num2;
    multi = num1*num2;
    sub = num1-num2;

    printf("\nSOMANDO: %d", soma);
    printf("\nDIVIDINDO: %d", div);
    printf("\nMULTIPLICANDO: %d", multi);
    printf("\nSUBTRAINDO: %d", sub);

    return 0;
}