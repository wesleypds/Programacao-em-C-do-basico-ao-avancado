#include <stdio.h>

int main(){

    int valor[10], qtd, maior;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor: ");
        scanf("%d", &valor[i]);
    }

    maior = valor[0];

    for (int i = 0; i < 10; i++)
    {
        if(valor[i] > maior)
        {
            maior = valor[i];
            qtd = i;
        }
    }

    printf("\nO maior numero digitado: %d\n", maior);
    printf("Posicao que o numero eh encontrado: valor[%d]\n", qtd);
        
    return 0;
}