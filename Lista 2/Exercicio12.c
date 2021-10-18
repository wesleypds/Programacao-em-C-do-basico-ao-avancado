#include <stdio.h>

int main(){

    int lados[3], soma, i = 0;

    while(i < 3){
        printf("Digite os valores: ");
        scanf("%d", &lados[i]);
        i++;
    }

    if(lados[0] < lados[1]+lados[2] && lados[1] < lados[0]+lados[2] && lados[2] < lados[1]+lados[0]){
        if(lados[0] == lados[1] && lados[0] == lados[2]){
            printf("Esse triangulo eh equilatero.");
        }else if(lados[0] == lados[1] || lados[0] == lados[2] || lados[1] == lados[2]){
            printf("Esse triangulo eh isosceles.");
        }else{
            printf("Esse triangulo eh escaleno.");
        }
    }else{
        printf("O valores nao se configura em um triangulo.");
    }

    return 0;
}
