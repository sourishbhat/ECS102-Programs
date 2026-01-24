#include <stdio.h>

int main(){
    int i = 100;
    float f = 1.0;
    double d = 3.14159265;
    char c = 'D';
    char name[] = "Hi";

    printf("Size of int: %zu bytes\n", sizeof(i));
    printf("Size of float: %zu bytes\n", sizeof(f));
    printf("Size of double: %zu bytes\n", sizeof(d));
    printf("Size of char: %zu byte\n", sizeof(c));
    printf("Size of string: %zu bytes\n", sizeof(name));

}