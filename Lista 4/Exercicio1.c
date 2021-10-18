#include <stdio.h>

int main(){

    int a[6], soma;

    for(int i = 0; i < 6; i++){
        printf("Digite o valor: ");
        scanf("%d", &a[i]);
    }

    soma = a[0] + a[1] + a[5];

    a[4] = 100;

    for(int i = 0; i < 6; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}