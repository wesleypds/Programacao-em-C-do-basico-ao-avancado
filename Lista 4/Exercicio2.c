#include <stdio.h>

int main(){

    int valores[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite os valores: ");
        scanf("%d", &valores[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Valor do vetor na posicao [%d] = %d\n", i, valores[i]);
    }
    

    return 0;
}