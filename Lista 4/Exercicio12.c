#include <stdio.h>

int main(){

    float valor[5], media, maior, menor;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor: ");
        scanf("%f", &valor[i]);
    }

    maior = valor[0];
    menor = valor[0];
    
    for (int i = 0; i < 5; i++)
    {

        if (valor[i] > maior)
        {
            maior = valor[i];
        }else if (valor[i] < menor)
        {
            menor = valor[i];
        }
        
    }

    media = (maior + menor)/2.0;

    printf("\nValores digitados:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %.2f ", valor[i]);
    }

    printf("\n\nO maior valor: %.2f\nO menor valor: %.2f.", maior, menor);
    printf("\nA media dos dois valores: %.2f.\n", media);
        
    return 0;
}