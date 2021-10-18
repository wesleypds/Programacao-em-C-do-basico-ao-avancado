#include <stdio.h>

int main(){

    float soma = 0.0, media, notas[15];

    for (int i = 0; i < 15; i++)
    {
        printf("Digite as notas: ");
        scanf("%f", &notas[i]);

        soma += notas[i];
    }

    media = soma / 15.0;

    printf("\nA media da turma: %.2f\n", media);
    
    return 0;
}