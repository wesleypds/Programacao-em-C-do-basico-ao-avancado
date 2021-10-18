#include <stdio.h>

int main(){


    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num%3 == 0 || num%5 == 0){
        if(num%3 == 0){
            printf("O numero eh divisivel por 3!");
        }else{
            printf("O numero eh divisivel por 5!");
        }
    }else{
        printf("O numero nao eh divisivel nem por 5 ou por 3!");
    }

    return 0;
}
