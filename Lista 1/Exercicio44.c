#include <stdio.h>

int main(){

    int mai, min;

    printf("Digite uma letra em MAIUSCULO: ");
    mai = getchar();

    //A diferen�a da mesma letra MAIUSCULA para a MINUSCULA na tabela ASCII � de 32
    min = mai + 32;

    printf("A letra digitada em minusculo: %c", min);

return 0;
}
