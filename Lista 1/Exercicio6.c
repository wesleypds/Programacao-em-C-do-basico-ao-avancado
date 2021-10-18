#include <stdio.h>

int main(){

    float c, f;

    printf("Digite o valor da temperatura em graus C: ");
    scanf("%f", &c);

    f = (c * (9.0/5.0)) + 32.0;

    printf("O valor convertido: %f", f);

return 0;
}
