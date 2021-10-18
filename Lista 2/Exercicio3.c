#include <stdio.h>
#include <math.h>

int main(){

    float num, raiz, quadrado;

    printf("Digite um numero qualquer (Real ou inteiro): ");
    scanf("%f", &num);

    if(num > 0){
        raiz = sqrt(num);
        printf("A raiz quadrada de %f eh %f.", num, raiz);
    }else{
        quadrado = pow(num,2);
        printf("%f elevado ao quadrado eh %f.", num, quadrado);
    }

    return 0;
}
