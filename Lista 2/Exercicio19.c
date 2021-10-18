#include <stdio.h>

int main(){

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("\n");

    if(idade < 5){
        printf("ERROR\nIdade deve ser maior que 5.");
    }else if(idade < 8){
            printf("Categoria: Infantil A");
    }else if(idade < 11){
            printf("Categoria: Infantil B");
    }else if(idade < 14){
            printf("Categoria: Juvenil A");
    }else if(idade < 18){
            printf("Categoria: Juvenil B");
    }else{
            printf("Categoria: Senior");
    }

    printf("\n");

    return 0;
}
