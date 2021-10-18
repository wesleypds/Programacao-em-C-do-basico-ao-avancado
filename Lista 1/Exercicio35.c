#include <stdio.h>
#include <math.h>

int main(){

    float cateto_a, cateto_b, hipo;

    printf("Digite os valores dos catetos.\n");
    printf("Cateto A: ");
    scanf("%f", &cateto_a);
    printf("Cateto B: ");
    scanf("%f", &cateto_b);

    hipo = sqrt((pow(cateto_a,2) + pow(cateto_b,2)));

    printf("O valor da Hipotenusa: %f", hipo);

return 0;
}
