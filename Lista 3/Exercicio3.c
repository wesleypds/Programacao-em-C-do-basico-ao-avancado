#include <stdio.h>

int main(){

    float soma = 0, media, num, i = 0;

    do{
        printf("Digite um numero: ");
        scanf("%f", &num);

        if(num > 0){
            soma += num;
            i++;
        }

    }while(i < 10);

    media = soma / 10.0;

    printf("\nA media dos numeros digitados: %.2f\n", media);

    return 0;
}
