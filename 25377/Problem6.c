#include <stdio.h>

int main()
{
    int num, temp, remainder;
    int found = 0;

    printf("Enter the Number:\n");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        remainder = temp % 10;
        int n = temp / 10;
        while (n > 0)
        {
            int n2 = n % 10;
            
            if (remainder == n2)
            {
                printf("First repeating digit: %d\n", remainder);
                found = 1;
                break;
            }

            n /= 10;
        }

        if (found)
            break;

        temp /= 10;
    }

    if (!found)
        printf("No repeating digit\n");

    return 0;
}