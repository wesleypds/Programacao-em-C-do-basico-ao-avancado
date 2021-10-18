#include <stdio.h>

int main(){

    float media, nota[3], soma = 0.0;
    int i = 0;

    while(i < 3){
        printf("Digite a nota: ");
        scanf("%f", &nota[i]);
        if(i == 2){
            soma += ((i + 3) * nota[i]);
        }else{
            soma += ((i + 2) * nota[i]);
        }
        i++;
    }

    media = soma/10.0;

    if(media < 3.0){
        printf("Aluno reprovado!");
    }else if(media < 5.0){
        printf("Aluno de recuperacao!");
    }else{
        printf("Aluno aprovado!");
    }

    printf("\nMedia %f", media);

    return 0;
}
