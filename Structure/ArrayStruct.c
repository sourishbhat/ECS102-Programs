#include <stdio.h>

struct Book{
    char title[50];
    float price;
};

void main(){
    struct Book books[4] = {
        {"C Program", 249.99},
        {"Data Structures", 349.99},
        {"Algorithms", 449.99},
        {"Deep Learning", 549.99},
    };

    for (int i = 0; i < 4; i++){
        printf("Title: %s\n", books[i].title);
        printf("Price: %.2f\n\n", books[i].price);
    }
}