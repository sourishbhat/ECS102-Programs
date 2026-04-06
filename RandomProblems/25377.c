#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    char dept[20];
};

int main() {
    FILE *fp;
    struct Student s;

    // Open your file (change filename to your roll number)
    fp = fopen("25987.txt", "a");

    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    // Read data from file into structure
    fscanf(fp, " %[^\n]\n%d\n%[^\n]", s.name, &s.roll, s.dept);

    fclose(fp);

    // Display data
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Department: %s\n", s.dept);

    // Print prime digits of roll number
    int n = s.roll;

    printf("Prime digits in roll number: ");

    while (n > 0) {
        int d = n % 10;

        if (d == 2 || d == 3 || d == 5 || d == 7) {
            printf("%d ", d);
        }

        n = n / 10;
    }

    printf("\n");

    return 0;
}