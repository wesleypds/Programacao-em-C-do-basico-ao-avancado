#include <stdio.h>

int main(){

    float polegadas, cm;

    printf("Digite o valor em polegadas: ");
    scanf("%f", &polegadas);

    cm = polegadas * 2.54;

    printf("O resultado: %f", cm);

return 0;
}
