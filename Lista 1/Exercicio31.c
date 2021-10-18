#include <stdio.h>

int main(){

    int ant, suc;

    printf("Digite um numero: ");
    scanf("%d", &ant);

    ant = ant - 1;
    suc = ant + 2;

    printf("Antecessor: %d\nSucessor: %d", ant, suc);

return 0;
}
