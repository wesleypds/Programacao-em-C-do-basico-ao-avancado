#include <stdio.h>

int main(){

    int opcao, i = 0, soma = 0, num[2];

    printf("Escolha a opcao abaixo:\n");
    printf("1 - soma de 2 numeros.\n");
    printf("2 - Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3 - Produto entre 2 numeros.\n");
    printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    printf("---> ");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        while(i < 2){
            printf("Digite dois numeros: ");
            scanf("%d", &num[i]);
            soma += num[i];
            i++;
        }
        printf("A soma dos numeros: %d", soma);
        break;
    case 2:
        while(i < 2){
            printf("Digite dois numeros: ");
            scanf("%d", &num[i]);
            i++;
        }
        if(num[0] < num[1]){
            soma = num[1] - num[0];
            printf("Diferenca entre os numeros: %d", soma);
        }else if(num[0] > num[1]){
            soma = num[0] - num[1];
            printf("Diferenca entre os numeros: %d", soma);
        }else{
            printf("Os numeros sao iguais.");
        }
        break;
    case 3:
        soma = 1;
        while(i < 2){
            printf("Digite dois numeros: ");
            scanf("%d", &num[i]);
            soma *= num[i];
            i++;
        }
        printf("Produto entre os numeros: %d", soma);
        break;
    case 4:
        while(i < 2){
            printf("Digite dois numeros: ");
            scanf("%d", &num[i]);
            i++;
        }
        if(num[0] != 0 && num[1] != 0){
            soma = num[0] / num[1];
            printf("Divisao entre os numeros: %d", soma);
        }else{
            printf("O denominador não pode ser zero.");
        }
        break;
    default:
        printf("Opcao invalida!");
    }

    return 0;
}
