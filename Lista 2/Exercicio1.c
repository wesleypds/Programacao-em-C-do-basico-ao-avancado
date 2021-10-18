#include <stdio.h>

int main(){

    int num[2], i = 0;

    while(i < 2){
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        i++;
    }

    if(num[0] < num[1]){
        printf("%d eh o maior numero!", num[1]);
    }else{
        printf("%d eh o maior numero!", num[0]);
    }

    return 0;
}
