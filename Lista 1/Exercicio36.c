#include <stdio.h>
#include <math.h>

int main(){

    float r, alt, vol;

    printf("Raio: ");
    scanf("%f", &r);
    printf("Altura: ");
    scanf("%f", &alt);

    vol = 3.141492 * pow(r,2) * alt;

    printf("Volume do cilindro: %f", vol);

return 0;
}
