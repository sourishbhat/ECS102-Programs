#include <stdio.h>

int main(){
    FILE *fo = fopen("file.txt", "w");
    
    if (fo == NULL){
        printf("File does not exist. \n");
    }

    fprintf(fo, "Hi, How are you? \n");
    
    fclose(fo);
    printf("Data written successfully. \n");

    FILE *fa = fopen("file.txt", "a");
    fprintf(fa, "I am fine, how are you? \n");

    fclose(fa);
    printf("Data added successfully. \n");

    char ch;
    FILE *fr = fopen("file.txt", "r");
    
    while ((ch = fgetc(fr)) != EOF){
        putchar(ch);
    }

    fclose(fr);
}