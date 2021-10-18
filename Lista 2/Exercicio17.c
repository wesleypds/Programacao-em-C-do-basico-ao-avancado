#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float delta, a = 0, b, c, raiz1, raiz2, rai, i = -1;

    do{
        system("cls");
        printf("Variavel (a) tem que ser diferente de zero!\n");
        printf("Digite o valor de A: ");
        scanf("%f", &a);
    }while(a == 0);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = pow(b,2) - 4 * a * c;

    if(delta < 0){
        printf("Nao existe raiz.");
    }else if(delta == 0){
        printf("Raiz unica");
    }else{
        rai = sqrt(delta);
        raiz1 = ((b * i) + rai) / (2 * a);
        raiz2 = ((b * i) - rai) / (2 * a);
        printf("Raiz 1: %f\nRaiz 2: %f\n", raiz1, raiz2);
    }

    return 0;
}
