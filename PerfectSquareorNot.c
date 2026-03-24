#include <stdio.h>

int main(){
    int n, num = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i*i <= n; i++){
        if(i*i == n){
            num = 1;
            break;
        }
    }

    if (num){
        printf("Perfect Square\n");
    } else {
        printf("Not a Perfect Square\n");
    }

}