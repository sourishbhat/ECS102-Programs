#include <stdio.h>

int main(){
    long int num, prod = 1, sum = 0, temp, remainder, prime = 1, i;

    scanf("%d", &num);

    temp = num;

    while (temp > 0){
        remainder = temp % 10;
        sum += remainder;
        prod *= remainder;
        temp /= 10;
    }

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", prod);

    if (num % 2 == 0){
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    if (num <= 1)
        prime = 0;
    else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime){
        printf("Prime\n");
    } else {
        printf("Composite\n");
    }

    return 0;
}
