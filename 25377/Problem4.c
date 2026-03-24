#include <stdio.h>

int main(){
    int num, sum = 0, count = 0;
    do {
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num != 0) {
            sum += num;
            count++;
        }
    } 
    while (num != 0);

    printf("The sum of the number is: \n", sum);
    printf("The digits of the number is: \n", count);
}