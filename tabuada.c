#include <stdio.h>

int main(){
    int num, tab, resul;

    printf("Digite o numero da tabuada que deseja ver: ");
    scanf("%d", &num);

    for(tab=1; tab<=10; tab++){
        resul = (num * tab);
        printf("\n %d * %d == %d", num, tab, resul);
    }

    return 0;
}