#include <stdio.h>
int main(){
    char ch;
    int x;

    printf("Enter an character and an integer: \n");
    scanf("%c %d", &ch, &x);

    printf("ASCII Value of the given character is: %d\n", ch);
    
    if (ch > x) {
        printf("ASCII Value of %c is greater than %d\n", ch, x);
    } else if (ch == x){
        printf("ASCII Value of %c is equal to %d\n", ch, x);
    } else {
        printf("ASCII Value of %c is smaller than %d\n", ch, x);
    }
}