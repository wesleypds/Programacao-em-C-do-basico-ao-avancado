#include <stdio.h>

int main(){

    int mult = 0;

    printf("Os multiplos de 3:\n");

    for(int i = 1; i <= 5; i++){
        mult = i * 3;
        printf("%d ", mult);
    }

    return 0;
}
