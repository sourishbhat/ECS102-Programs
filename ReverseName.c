#include <stdio.h>

int reverse_name(char ch){
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')){
        reverse_name(ch);
        printf("%c", ch);
    }
}

int main(){
    char ch;
    printf("Enter your name: ");
    reverse_name(ch);
    printf("\n");
}