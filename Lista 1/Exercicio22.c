#include <stdio.h>

int main(){

    float jardas, metros;

    printf("Digite um valor em jardas: ");
    scanf("%f", &jardas);

    metros = 0.91 * jardas;

    printf("O resultado: %f", metros);

return 0;
}
