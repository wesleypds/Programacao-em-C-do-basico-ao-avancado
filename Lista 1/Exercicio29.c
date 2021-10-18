#include <stdio.h>

int main(){

    float media = 0, z[4];

    printf("Digite as 3 notas:\n");

    for(int i = 0; i < 4; i++){
        scanf("%f", &z[i]);
        media = media + z[i];
    }

    media = media / 4.0;

    printf("O resultado: %f", media);

return 0;
}
