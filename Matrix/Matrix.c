#include <stdio.h>

int main(){
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("Elements at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix is: \n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }


}