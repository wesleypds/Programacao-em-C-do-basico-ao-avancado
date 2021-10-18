#include <stdio.h>

int main(){

    float km, litros, consumo_l;

    printf("Digite os Km percorridos: ");
    scanf("%f", &km);
    printf("Digite a quantidade de gasolina consumida: ");
    scanf("%f", &litros);

    consumo_l = km / litros;

    printf("\nKm/l consumidos: %f\n", consumo_l);

    if(consumo_l < 8.0){
        printf("Venda o carro!");
    }else if(8.0 >= consumo_l <= 14.0){
        printf("Economico!");
    }else{
        printf("Super economico!");
    }

    printf("\n");

    return 0;
}
