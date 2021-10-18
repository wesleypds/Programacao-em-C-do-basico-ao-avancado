#include <stdio.h>

int main(){

    int valor[10], menor, maior;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor: ");
        scanf("%d", &valor[i]);
    }

    maior = valor[0];
    menor = valor[0];

    for(int i = 0; i < 10; i++)
    {
        if (valor[i] > maior)
            maior = valor[i];
        
        if (valor[i] < menor)
            menor = valor[i];
    }

    printf("Menor numero digitado: %d\n", menor);
    printf("Maior numero digitado: %d", maior);
    
    return 0;
}