#include <stdio.h>

int main(){

    float win1, win2, win3, p = 780000.0;

    win1 = p - (p * ((100.0 - 46.0) / 100.0));
    win2 = p - (p * ((100.0 - 32.0) / 100.0));
    win3 = p - (win1 + win2);

    printf("Ganhador 1: %f\nGanhador 2: %f\nGanhador 3: %f", win1, win2, win3);

return 0;
}
