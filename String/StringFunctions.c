#include <stdio.h>
#include <string.h>

int main(){
    char *str;
    printf("Enter a sentence: \n");
    fgets(str, 100, stdin);
    char *p = strchr(str, 'c');

    printf("%s", p);
}
