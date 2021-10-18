#include <stdio.h>

int main(){

    int valor[5], maior, menor, qtd1 = 0, qtd2 = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor: ");
        scanf("%d", &valor[i]);
    }

    maior = valor[0];
    menor = valor[0];

    for (int i = 0; i < 5; i++)
    {
        if (valor[i] > maior)
        {
            maior = valor[i];
            qtd1 = i;
        }else if (valor[i] < menor)
        {
            menor = valor[i];
            qtd2 = i;
        }
    }

    printf("\nO maior valor, %d, esta na posicao %d do vetor.\n", maior, qtd1);
    printf("O menor valor, %d, esta na posicao %d do vetor.\n", menor, qtd2);
    
    return 0;
}