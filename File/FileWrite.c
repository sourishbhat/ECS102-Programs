#include <stdio.h>

int main(){
    FILE *file = fopen("file.txt", "w");

    if (file == NULL){
        printf("File does not exist.");
    }

    fprintf(file, "This course hurts me to my depth. \n");
    
    fclose(file);
    printf("Data written successfully.\n");
}