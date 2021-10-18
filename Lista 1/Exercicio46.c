#include <stdio.h>

int main(){

    int num, num_unico[4], i = 0;

    printf("Digite um numero de 1000 a 9999: ");
    scanf("%d", &num);

    num_unico[0] = num/1000;
    num_unico[1] = (num/100)%10;
    num_unico[2] = (num/10)%10;
    num_unico[3] = (num%1000)%10;

    while(i < 4){
            printf("%d\n", num_unico[i]);
            i++;
    }

return 0;
}
