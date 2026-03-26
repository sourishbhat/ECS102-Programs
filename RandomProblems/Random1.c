#include <stdio.h>

int main(){
    long int roll_no;
    printf("Enter your roll number: ");
    scanf("%ld", &roll_no);

    int sum = 0, digit;

    while (roll_no > 0){
        digit = roll_no % 10;
        sum += ('0' + digit);
        roll_no /= 10;
    }

    printf("The sum of ASCII Values of all digits are: %d\n", sum);
}