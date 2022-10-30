#include <stdio.h>

void main(){

        int num1;
        int num2;
        int resultado = 10;

        printf("Digite o primeiro numero: \n", &num1);
        scanf("%i", &num1);

        printf("Agora, digite o segundo numero: \n", &num2);
        scanf("%i", &num2);

        resultado = num1 - num2;

        printf("O resultado e: %i", resultado);

    return 0;
}