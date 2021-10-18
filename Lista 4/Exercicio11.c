#include <stdio.h>

int main(){

    float valor[10], soma = 0.0;
    int qtd = 0;

    for (int i = 0; i < 10; i++)
    {

        printf("Digite o valor: ");
        scanf("%f", &valor[i]);

        if (valor[i] >= 0)
         {
             soma += valor[i];
         }else{
             qtd++;
         }
         
    }

    printf("\nA soma dos valores positivos: %.2f.\n", soma);
    printf("Foram digitados %d valores negativos.\n", qtd);
    
    return 0;
}