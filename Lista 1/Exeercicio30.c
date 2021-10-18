#include <stdio.h>

int main(){

    float real, cot_dolar, dolar;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cot_dolar);

    printf("Digite o valor em Real: ");
    scanf("%f", &real);

    dolar = real * cot_dolar;

    printf("O valor convertido: %f", dolar);

return 0;
}
