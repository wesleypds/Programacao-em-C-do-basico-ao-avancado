#include <stdio.h>

int main(){

    float desc, preco, preco_desc;

    printf("Valor do produto: ");
    scanf("%f", &preco);

    desc = preco * (12.0 / 100.0);
    preco_desc = preco - desc;

    printf("Valor do produto com desconto: %f", preco_desc);

return 0;
}
