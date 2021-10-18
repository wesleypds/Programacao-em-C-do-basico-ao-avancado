#include <stdio.h>

int main(){

    int valor[10], j = 1, qtd;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        while (j < 10)
        {
            if (valor[i] == valor[j])
            {
                printf("Valores iguais: %d | %d.\nPosicao: [%d] | [%d].\n\n", valor[i], valor[j], i, j);
            }
            j++;
        }

        qtd = i + 2;

        while (j > qtd)
        {
            j--;
        }
        
    }
    
    return 0;
}