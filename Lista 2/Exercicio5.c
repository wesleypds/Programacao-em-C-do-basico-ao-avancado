#include <stdio.h>

int main(){

    int a;

    printf("Digite um numero: ");
    scanf("%d", &a);

    if(a%2 == 1){
        printf("O numero %d eh impar!", a);
    }else{
        printf("O numero %d eh par!", a);
    }

    return 0;
}
