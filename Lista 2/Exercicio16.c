#include <stdio.h>

int main(){

    float valor, preco_final;
    int opc;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Escolha um opcao:\n");
    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    printf("---> ");
    scanf("%d", &opc);

    switch(opc){
    case 1:
        preco_final = valor + (valor * (7.0/100.0));
        printf("Valor com imposto: %f", preco_final);
        break;
    case 2:
        preco_final = valor + (valor * (12.0/100.0));
        printf("Valor com imposto: %f", preco_final);
        break;
    case 3:
        preco_final = valor + (valor * (15.0/100.0));
        printf("Valor com imposto: %f", preco_final);
        break;
    case 4:
        preco_final = valor + (valor * (8.0/100.0));
        printf("Valor com imposto: %f", preco_final);
        break;
    default:
        printf("Opcao Invalida!");
    }

    return 0;
}
