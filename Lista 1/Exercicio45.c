#include <stdio.h>

int main(){

    int num, num_invert, a, b, c;

    printf("Digite um numero entre 100 a 999: ");
    scanf("%d", &num);

    a = 100 * (num%10);
    b = 10 * ((num/10)%10);
    c = num/100;

    num_invert = a + b + c;

    printf("%d", num_invert);

return 0;
}
