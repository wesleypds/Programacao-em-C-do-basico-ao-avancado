#include <stdio.h>

int main(){

    float sal, h_trab, h_trab_mes;

    printf("Valor da hora de trabalho: ");
    scanf("%f", &h_trab);
    printf("Dias trabalhados: ");
    scanf("%f", &h_trab_mes);

    sal = h_trab * h_trab_mes + (h_trab * h_trab_mes * (10.0 / 100));

    printf("Salario: %f", sal);

return 0;
}
