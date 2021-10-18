#include <stdio.h>

int main(){

    int valor[6], qtd, i = 0;

    while (i < 6)
    {

        printf("Digite um valor: ");
        scanf("%d", &valor[i]);

        if (valor[i]%2 == 0)
        {
            i++;
        }
        
    }

    printf("\nValores trocados de posicao:");
    for (i = 5; i >= 0; i--)
    {
        printf(" %d ", valor[i]);
    }
    
    printf("\n");

    return 0;
}