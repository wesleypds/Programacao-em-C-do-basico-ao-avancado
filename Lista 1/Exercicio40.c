#include <stdio.h>

int main(){

    float d_trab, sal;

    printf("Dias trabalhados: ");
    scanf("%f", &d_trab);

    sal = d_trab * 30.0 - (d_trab * 30.0 * (8.0 / 100.0));

    printf("Salario com desconto IR: %f", sal);

return 0;
}
