#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 10;
    printf("i = %d\n", d.i);

    d.f = 3.14;
    printf("f = %f\n", d.f);
    printf("i = %d\n", d.i); // Garbage Value, as it is overwritten by f.

    d.c = 'A';
    printf("c = %c\n", d.c);

    return 0;
}