#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *str1 = (char*) malloc(50);
    char str2[] = "World!";

    strcat(str1,str2);
    printf("\n", str1);

    strncat(str1, str2, 5);
    printf(str1);
}