#include <stdio.h>

int main(){
    int roll_no = 125;
    int *ptr = &roll_no;

    printf("Value of Roll Number: %d\n", roll_no);
    printf("Address of Roll Number: %p\n", &roll_no);
    printf("Address stored by pointer of roll number: %p\n", ptr);
    printf("Value of Address: %d\n", *ptr);
}