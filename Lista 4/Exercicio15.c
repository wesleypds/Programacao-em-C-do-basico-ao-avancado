#include <stdio.h>

int main(){

    int valor[20], valorSemRept[20], x = 0, i = 1, qtd;
    
    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor: ");
        scanf("%d", &valor[i]);
    }

    while (x < 20)
    {
        while (i < 20)
        {
            if (valor[x] != valor[i])
            {
                valorSemRept[x] = 

            }

            i++;
        }

        qtd = x + 2;
        while (i > qtd)
        {
            i--;
        }

        x++;
    }
    
    return 0;
}