#include <stdio.h>

int main(){

    int valor[10], qtd = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor[i]);

        if (valor[i]%2 == 0)
        {
            qtd++;
        }
        
    }

    printf("O vetor tem %d numeros pares!", qtd);

    return 0;
}