#include <stdio.h>

int main(){

    float m3, litros;

    printf("Digite o valor em litros: ");
    scanf("%f", &litros);

    m3 = litros / 1000;

    printf("O resultado: %f", m3);

return 0;
}
