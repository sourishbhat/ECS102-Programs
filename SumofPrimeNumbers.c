#include <stdio.h>

int main(void) {
    int limit, num = 2, sum = 0;

    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    do {
        int i = 2;
        int prime = 1;

        do {
            if (num % i == 0) {
                prime = 0;
                break;
            }
            i++;
        } while (i < num);

        if (prime)
            sum += num;

        num++;
    } while (num <= limit);

    printf("Sum of prime numbers = %d\n", sum);
    return 0;
}
