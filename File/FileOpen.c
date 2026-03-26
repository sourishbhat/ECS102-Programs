#include <stdio.h>

int main(){
    FILE *file = fopen("file.txt", "r");

    if (file == NULL){
        printf("File does not exist.");
    }

    char ch;
    printf("File Content: \n");
    while ((ch = fgetc(file)) != EOF){
        putchar(ch);
    }

    fclose(file);
}