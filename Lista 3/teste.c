#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char ast[7];
    int j = 0;

    for(int i = 0; i < 7; i++){
        ast[i] = 42;
        while(j <= i){
            printf("%c", *ast);
            j++;
        }
        printf("\n");
        j = 0;
    }

  return 0;
}
