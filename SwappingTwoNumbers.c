#include <stdio.h>

int main(){
    int x, y, tempo;
    x = 10;
    y = 20;

    tempo = x;
    x = y;
    y = tempo;

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}