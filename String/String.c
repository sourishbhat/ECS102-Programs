#include <stdio.h>
#include <string.h>

void main(){
    char *str = "ECS-102";
    char *sub_str1;

    sub_str1 = strchr(str, '1');
    printf("The substring after matching the character '1' is %s with base address %p \n", sub_str1, sub_str1);
}
