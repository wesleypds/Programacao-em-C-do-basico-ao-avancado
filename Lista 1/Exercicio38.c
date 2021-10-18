#include <stdio.h>

int main(){

    float sal, new_sal, acres;

    printf("Salario: ");
    scanf("%f", &sal);

    acres = sal * (25.0 / 100.0);
    new_sal = sal + acres;

    printf("Novo salario: %f", new_sal);

return 0;
}
