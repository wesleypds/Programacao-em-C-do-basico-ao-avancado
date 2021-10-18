#include <stdio.h>

int main(){

    float valor_tt, com_vista, com_parc, valor_desc, parc_;
    int par;

    printf("Valor total: ");
    scanf("%f", &valor_tt);

    fflush(stdin);//Para limpar o buffer de memória

    printf("Parcelamento? S ou N: ");

    par = getchar();//Ler um caracter/string e retorna um inteiro

    valor_desc = valor_tt - (valor_tt * (10.0 / 100.0));

    printf("Total a pagar: %f\n", valor_desc);

    if(par == 83){//Na tabela ASCII a letra S equivale a 83 em decimal
        parc_ = valor_desc / 3.0;
        com_parc = valor_tt * (5.0 / 100.0);
        printf("Parcelamento 3X de: %f\n", parc_);
        printf("Comissao do Funcionario: %f", com_parc);
    }else{
        com_vista = valor_desc * (5.0 / 100.0);
        printf("Comissao do Funcionario: %f", com_vista);
    }

return 0;
}
