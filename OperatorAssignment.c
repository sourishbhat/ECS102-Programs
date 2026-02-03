/* #include <stdio.h>

int main(){
    int num, temp, num_digit, sum_digit, remainder, units, tens, hundreds;

    printf("Enter a 3 digit number: \n");
    scanf("%d", &num);

    printf("The units digit is: %d\n", units = num % 10);
    printf("The tens digit is: %d\n", units = (num/10) % 10);
    printf("The units digit is: %d\n", units = num/100);

    sum_digit = ((num % 10) + ((num/10) % 10) + (num/100));
    printf("The sum of the digits is: %d\n", sum_digit);
}

*/

#include <stdio.h>
int main(){
    int num, temp, sum = 0, prod = 1, count = 0, remainder;
    int d1, d2, d3;
    int diff, equal, sumprod, sumeven;

    printf("Enter a 3 digit number: \n");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        remainder = temp % 10;
        sum += remainder;
        prod *= remainder;

        if (count == 0){
            d1 = remainder;
            printf("Units digit: %d\n", remainder);
        } else if (count == 1) {
            d2 = remainder;
            printf("Tens digit: %d\n", remainder);
        } else if (count == 2){
            d3 = remainder;
            printf("Hundreds digit: %d\n", remainder);
        }

        temp /= 10;
        count++;

    }
    printf("Sum = %d\n", sum);
    printf("Product = %d\n", prod);

    diff = (d1 != d2) && (d2 != d3) && (d1 != d3);
    equal = (d1 == d2) || (d2 == d3) || (d1 == d3);
    sumprod = sum > prod;
    sumeven = sum % 2 == 0;

    printf("All different digits = %d\n", diff);
    printf("Any two equal digits = %d\n", equal);
    printf("Sum is greater than Product = %d\n", sumprod);
    printf("Sum is divisible by 2 = %d\n", sumeven);
}