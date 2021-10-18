#include <stdio.h>

int main(){

    int a[3], soma = 0;

    printf("Digite tres valores inteiros:\n");

    for(int i = 0; i < 3; i++){
        scanf("%d", &a[i]);
        soma = soma + a[i];
    }

    printf("Soma: %d", soma);

return 0;
}
