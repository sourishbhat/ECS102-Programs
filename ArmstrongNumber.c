#include <stdio.h>
#include <math.h>

int main(){
    int num, temp, remainder, result, i;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (temp = num; num > 0; i++){
        temp /= 10;
    }

    temp = num;

    while (temp > 0){
        remainder = temp % 10;
        result += (int)round(pow(remainder, i)); 
        remainder /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}