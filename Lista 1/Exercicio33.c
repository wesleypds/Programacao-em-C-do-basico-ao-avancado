#include <stdio.h>
#include <math.h>

int main(){

    float area, l;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &l);

    area = pow(l,2);

    printf("A area do quadrado e: %f", area);

return 0;
}
