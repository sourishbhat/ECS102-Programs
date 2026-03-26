#include <stdio.h>

int printStars(int n){
    if (n==0){
        return;

    printf("* ");
    printStars(n - 1);
    }
}

int printPattern(int n){
    if (n==0){
        return;
    
    printStars(n);
    printf("\n");

    printPattern(n-1);
    }
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printPattern(n);
    return 0;
}


