#include <stdio.h>
#include <math.h>

int main(){

    float raiz, num;

    printf("Digite um numero qualquer: ");
    scanf("%f", &num);

    if(num > 0){
        raiz = sqrt(num);
        printf("A raiz quadrada de %f eh %f", num, raiz);
    }else{
        printf("Numero invalido!");
    }

    return 0;
}
