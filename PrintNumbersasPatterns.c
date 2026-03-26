#include <stdio.h>

int printNumbers (int n){
    if (n == 0)
        return;
    printNumbers(n-1);
    printf("%d", n);
    
}

int printPattern (int n){
    if (n == 0)
        return;
    
    printPattern(n-1);
    printNumbers(n);
    printf("\n");
    
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}