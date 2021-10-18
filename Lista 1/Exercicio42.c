#include <stdio.h>

int main(){

    float sal_base, sal_final;

    printf("Salario: ");
    scanf("%f", &sal_base);

    sal_final = sal_base + (sal_base * (5.0 / 100.0)) - (sal_base * (7.0 / 100.0));

    printf("Salario a receber: %f", sal_final);

return 0;
}
