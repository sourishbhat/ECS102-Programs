#include <stdio.h>

int main(void) {
    int num, temp, num_digit = 0, sum_digit = 0, remainder;

    printf("Enter a Number : ");
    scanf("%d", &num);

    temp = num;

    if (temp == 0) {
        num_digit = 1;
    }

    if (temp < 0) {
        temp = -temp;
    }

    while (temp > 0) {
        remainder = temp % 10;
        sum_digit += remainder;
        num_digit++;
        temp /= 10;
    }

    printf("The number of digits is %d\n", num_digit);
    printf("The sum of digits is %d\n", sum_digit);

    return 0;
}
