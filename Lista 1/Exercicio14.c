#include <stdio.h>

int main(){

    float graus, radianos;

    printf("Digite o valor em graus: ");
    scanf("%f", &graus);

    radianos = graus * 3.14 / 180.0;

    printf("O resultado: %f", radianos);

return 0;
}
