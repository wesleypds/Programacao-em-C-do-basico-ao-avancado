#include <stdio.h>

int main(){

    float cm, polegadas;

    printf("Digite o valor em cm: ");
    scanf("%f", &cm);

    polegadas = cm / 2.54;

    printf("O resultado: %f", polegadas);

return 0;
}
