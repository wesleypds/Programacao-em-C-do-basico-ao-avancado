#include <stdio.h>
#include <math.h>

int main(){

    int num, loga;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num > 0){
        loga = log(num);
        printf("O logaritmo de %d eh %d.", num, loga);
    }else{
        printf("Numero invalido!");
    }

    return 0;
}
