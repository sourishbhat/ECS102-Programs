#include <stdio.h>

void printSpaces(int n)
{
    if (n <= 0)
        return;

    printf(" ");
    printSpaces(n - 1);
}

void printRow(int i, int N, int j)
{
    if (j > (2 * i - 1))
        return;

    if (i == N || j == 1 || j == (2 * i - 1))
        printf("%d", i);
    else
        printf(" ");

    printRow(i, N, j + 1);
}

void pyramid(int i, int N)
{
    if (i > N)
        return;

    printSpaces(N - i);

    printRow(i, N, 1);

    printf("\n");

    pyramid(i + 1, N);
}

int main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    pyramid(1, N);

    return 0;
}