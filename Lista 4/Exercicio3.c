#include <stdio.h>
#include <math.h>

int main(){

    float valor[10], valor_quadrado[10];

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o valor: ");
        scanf("%f", &valor[i]);
        valor_quadrado[i] = pow(valor[i],2.0);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("O valor %.2f elevado por 2 = %.2f\n", valor[i], valor_quadrado[i]);
    }
    

    return 0;
}