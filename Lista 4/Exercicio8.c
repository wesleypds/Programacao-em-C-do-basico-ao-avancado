#include <stdio.h>

int main(){

    int valor[6], qtd;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o valor: ");
        scanf("%d", &valor[i]);
    }

    printf("\nValores do vetor:");
    for (int i = 0; i < 6; i++)
    {
        printf(" %d ", valor[i]);
    }

    printf("\n\nValores do vetor com posicoes invertidas:");
    for (int i = 5; i >= 0; i--)
    {
        printf(" %d ", valor[i]);
    }

    printf("\n");
    
    return 0;
}