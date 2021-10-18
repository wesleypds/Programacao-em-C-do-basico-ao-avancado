#include <stdio.h>

int main(){

    char matriz[][] = {{'joao','sao paulo', '9999-1234'},{'joao','sao paulo', '9999-1234'},{'joao','sao paulo', '9999-1234'}};

    for(int i = 0; i <= 3; i++){
        printf("%c %c %c\n",matriz[i][0], matriz[i][1], matriz[i][2]);
    }

    return 0;
}
