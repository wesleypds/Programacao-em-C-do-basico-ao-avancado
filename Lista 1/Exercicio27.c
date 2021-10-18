#include <stdio.h>

int main(){

    float hect, m2;

    printf("Digite o valor em hectares: ");
    scanf("%f", &hect);

    m2 = hect * 10000;

    printf("O resultado: %f", m2);

return 0;
}
