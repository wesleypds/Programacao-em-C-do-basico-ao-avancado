#include <stdio.h>

int main(){

    float m3, litros;

    printf("Digite o valor em metros cubicos: ");
    scanf("%f", &m3);

    litros = 1000 * m3;

    printf("O resultado: %f", litros);

return 0;
}
