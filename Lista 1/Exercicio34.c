#include <stdio.h>
#include <math.h>

int main(){

    float r, area;

    printf("Digite o valor do raio: ");
    scanf("%f", &r);

    area = 3.14 * pow(r,2);

    printf("A area da circuferencia e: %f", area);

return 0;
}
