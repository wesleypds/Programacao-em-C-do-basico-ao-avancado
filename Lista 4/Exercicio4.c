#include <stdio.h>

int main(){

    int valor[8], soma = 0, posicao;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite o valor: ");
        scanf("%d", &valor[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Digite um numero menor que 8: ");
        scanf("%d", &posicao);
        soma += valor[posicao];
    }

    printf("A soma dos valores na posicao x e y = %d", soma);

    return 0;
}