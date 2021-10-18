#include <stdio.h>

int main(){

    float f, c;

    printf("Digite o valor em F: ");
    scanf("%f", &f);

    c = (5.0 * (f - 32.0))/9.0;

    printf("Resultado: %f", c);

return 0;
}
