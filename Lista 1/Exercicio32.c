#include <stdio.h>

int main(){

    int a, suc, ant;

    printf("Digite um numero: ");
    scanf("%d", &a);

    a = a - 1;
    ant = a * 2;
    suc =  3 * (a + 2);

    printf("Dobro do antecessor: %d\nTriplo do sucessor: %d", ant, suc);

return 0;
}
