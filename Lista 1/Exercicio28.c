#include <stdio.h>
#include <math.h>

int main(){

    int soma = 0, z[3];

    printf("Digite 3 numeros:\n");

    for(int i = 0; i < 3; i++){
        scanf("%d", &z[i]);
        z[i] = pow(z[i],2);
        soma = soma + z[i];
    }

    printf("O resultado: %d", soma);

return 0;
}
