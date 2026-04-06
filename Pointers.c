#include <stdio.h>

int main(){
    int n;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    char name[n][10];

    printf("Enter the names: ");
    for (int i = 0; i < n; i++){
        scanf("%s", name[i]);
    }

    printf("The names are: \n");
    for (int i = 0; i < n; i++){
        printf("%s\n", name[i]);
    }

    return 0;
}    