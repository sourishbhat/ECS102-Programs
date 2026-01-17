#include <stdio.h>

int main(){
    int n, i = 0;
    // int binary[32];
    printf("Enter the number which you want to convert: ");
    scanf("%d", &n);

    if (n == 0){
        printf("Binary : 0\n");
        return 0;
    }
    /*
    while (n > 0) {
        binary[i] = n % 2;
        n = n/2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    */
     printf("The Octal Equivalent for the number is: %o", n);
     printf("The Hexadecimal Equivalent for the number is: %X", n);

}