#include <stdio.h>

int main(){

    int temp, idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite tempo de servico: ");
    scanf("%d", &temp);

    if(idade >= 65){
        printf("Foi deferido para aposentadoria.");
    }else if(temp >= 30){
        printf("Foi deferido para aposentadoria.");
    }else if(idade >= 60 && temp >= 25){
        printf("Foi deferido para aposentadoria.");
    }else{
        printf("Foi indeferido para aposentaria.");
    }

    return 0;
}
