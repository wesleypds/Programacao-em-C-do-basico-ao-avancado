#include <stdio.h>

int main(){

    int num[2], dif, i = 0;

    while(i < 2){
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        i++;
    }

    if(num[0] < num[1]){
        dif = num[1] - num[0];
        printf("%d eh o maior numero e a diferenca eh de %d entre eles.", num[1], dif);
    }else{
        dif = num[0] - num[1];
        printf("%d eh o maior numero e a diferenca eh de %d entre eles.", num[0], dif);
    }

    return 0;
}
