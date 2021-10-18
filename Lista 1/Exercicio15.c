#include <stdio.h>

int main(){

    float radianos, graus;

    printf("Digite o valor em radianos: ");
    scanf("%f", &radianos);

    graus = radianos * 180.0 / 3.14;

    printf("O resultado: %f", graus);

return 0;
}
