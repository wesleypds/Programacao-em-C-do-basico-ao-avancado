#include <stdio.h>

int main(){

    int num, soma, a, b, c;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\n");

    if(num > 0){

        a = num/100;
        b = (num/10)%10;
        c = num%10;

        soma = a + b + c;

        printf("A soma  de todos o algarismos: %d", soma);
    }else{
        printf("Numero Invalido!");
    }

    printf("\n");

    return 0;
}
