#include <stdio.h>
#include <math.h>

int main(){

    int num, raiz, quadrado;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    if(num > 0){
        raiz = sqrt(num);
        quadrado = pow(num,2);
        printf("Raiz quadrada de %d eh %d.\n%d ao quadrado eh %d.\n", num, raiz, num, quadrado);
    }else{
        printf("Numero invalido! (0 ou menor que 0).\n");
    }

    return 0;
}
