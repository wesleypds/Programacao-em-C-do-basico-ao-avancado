#include <stdio.h>

int main(){

    float m2, acres;

    printf("Digite o valor em m2: ");
    scanf("%f", &m2);

    acres = m2 * 0.000247;

    printf("O resultado: %f", acres);

return 0;
}
